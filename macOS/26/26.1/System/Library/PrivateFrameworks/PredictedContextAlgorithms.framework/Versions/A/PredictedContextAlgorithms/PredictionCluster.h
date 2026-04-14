@class NSString;

@interface PredictionCluster : NSObject

@property long long visitLoiIdx;
@property (retain) NSString *visitLoiString;
@property double visitEntryTime;
@property double visitEntryUnc;
@property double visitExitUnc;
@property double visitExitTime;
@property double visitProbability;
@property int visitStartIdx;
@property int visitEndIdx;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
