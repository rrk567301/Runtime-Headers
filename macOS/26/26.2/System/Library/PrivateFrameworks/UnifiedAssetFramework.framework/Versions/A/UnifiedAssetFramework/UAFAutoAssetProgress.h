@class NSString, NSMutableDictionary;

@interface UAFAutoAssetProgress : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL updateIsFinished;
@property (nonatomic) unsigned long long totalWork;
@property (nonatomic) unsigned long long completedWork;
@property (nonatomic) unsigned long long reportedTotalWork;
@property (nonatomic) unsigned long long reportedCompletedWork;
@property (nonatomic) unsigned long long reportedStatus;
@property (retain, nonatomic) NSMutableDictionary *statuses;
@property (retain, nonatomic) NSMutableDictionary *autoAssetSets;
@property (retain, nonatomic) NSMutableDictionary *errors;
@property (copy, nonatomic) id /* block */ internalProgressCompletion;

+ (id)getSerialQueue;

- (void)progress:(id)a0;
- (void).cxx_destruct;
- (void)summarize;
- (void)reportStatus:(unsigned long long)a0;
- (void)updateFinished:(id /* block */)a0;
- (void)finished:(id)a0 withStatus:(unsigned long long)a1 withError:(id)a2;
- (void)finishedOutOfSpace:(id)a0;
- (id)initWithAssetSetUsages:(id)a0 configurationManager:(id)a1 internalProgressWithStatus:(id /* block */)a2;
- (void)started:(id)a0;

@end
