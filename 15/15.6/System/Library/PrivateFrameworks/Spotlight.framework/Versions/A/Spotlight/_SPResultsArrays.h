@class SPQueryTask, NSSet, NSArray, NSDictionary;

@interface _SPResultsArrays : NSObject

@property (retain) SPQueryTask *task;
@property unsigned long long queryId;
@property char topHitIsIn;
@property char mainQueriesFinished;
@property char parsecFinished;
@property char finished;
@property (retain) NSSet *dupDictResults;
@property (retain) NSSet *origDictResultsId;
@property (retain) NSArray *topHits;
@property (retain) NSArray *results;
@property (retain) NSArray *suggestionResults;
@property double blendingDuration;
@property (retain) NSArray *sections;
@property (retain) NSArray *fullSections;
@property (retain) NSDictionary *ecrGroundedOutput;
@property (retain) NSArray *ecrGroundedPersons;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
