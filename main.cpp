#include <iostream>
#include <vector>       //dont forget this in order to include vectors.
using namespace std;

int main()
{
//    vector <double> test_scores{88.5,77.16,57,79.5};
//    cout << "Physics score is "<<test_scores[0]<<endl ;
//    cout << "Physics score is "<<test_scores.at(0)<<endl;
//    cout << "There are "<<test_scores.size()<<" entries in this vector.\n";
//    cout << "Enter a test score score to add to this list: ";
//    int score_to_be_added;
//    cin>> score_to_be_added;
//    test_scores.push_back(score_to_be_added);
//    cout << "Enter another test score to be added to this list :";
//    cin>> score_to_be_added;
//    test_scores.push_back(score_to_be_added);
//    cout << "\nThe extended test scores are now as follows :\n ";
//    cout << test_scores.at(0)<<endl ;
//    cout << test_scores.at(1)<<endl;
//    cout << test_scores.at(2)<<endl;
//    cout << test_scores.at(3)<<endl;
//    cout << test_scores.at(4)<<endl; 
//    cout << test_scores.at(5)<<endl;  
//    cout << "\nThere are now "<<test_scores.size()<<" entries in this list of scores.\n";
  
    
    
    // Using a 2D Vector now...............
//    vector<vector<int>> movie_review {{2,4,5,3},{3,5,5,4},{4,5,4,5}};
//    cout << movie_review.at(1).at(2)<<endl ;                    //using vector method
//    cout << movie_review.at(2).at(0)<<endl ;
//    cout << movie_review[1][2]<<endl ;                          // using array method
    
    
    //Section challenge 7===========================================================================================
    
    
    vector <int> vec1;
    vector <int> vec2;
    vec1.push_back(10);
    vec1.push_back(20);
    cout << vec1.at(0)<<endl;                   // output using vector method
    cout << vec1.at(1)<<endl;
    cout << "There are "<<vec1.size()<< " elements in the first vector.\n";
    vec2.push_back(100);
    vec2.push_back(200);
    cout << vec2.at(0)<<endl;                   // output using vector method
    cout << vec2.at(1)<<endl;
    cout << "There are "<<vec2.size()<< " elements in the second vector.\n";
    
    
    // Now forming a 2D vector.====================
    vector <vector<int>> vector_2D;
    
    vector_2D.push_back(vec1);
    vector_2D.push_back(vec2);
    cout << "\nGiven below are the elements of vector_2D :\n";
    cout << vector_2D.at(0).at(0)<<" "<< vector_2D.at(0).at(1)<<endl;
    cout << vector_2D.at(1).at(0)<<" "<< vector_2D.at(1).at(1)<<endl;
    vec1.at(0) = 1000;
    cout << "\nGiven below are the updated elements of vector_2D :\n";
    cout << vector_2D.at(0).at(0)<<" "<< vector_2D.at(0).at(1)<<endl;
    cout << vector_2D.at(1).at(0)<<" "<< vector_2D.at(1).at(1)<<endl;
    cout << "\nupdated elements of vector1 :\n";
    cout << vec1.at(0)<<endl;
    cout << vec1.at(1)<<endl;
    return 0;
}
