@class NSNumber, NSArray;

@interface CHIPApplianceStatisticsClusterLogResponseParams : NSObject

@property (retain, nonatomic) NSNumber *timeStamp;
@property (retain, nonatomic) NSNumber *logId;
@property (retain, nonatomic) NSNumber *logLength;
@property (retain, nonatomic) NSArray *logPayload;

- (id)init;
- (void).cxx_destruct;

@end
