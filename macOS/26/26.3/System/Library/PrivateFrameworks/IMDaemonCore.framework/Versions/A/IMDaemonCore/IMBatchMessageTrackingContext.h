@class NSString, NSNumber, IMPacketTracker;

@interface IMBatchMessageTrackingContext : NSObject

@property (readonly, nonatomic) NSString *batchIdentifier;
@property (retain, nonatomic) IMPacketTracker *messageTracker;
@property (nonatomic) long long totalMessagesExpected;
@property (readonly, nonatomic) NSNumber *batchNumber;

- (BOOL)isComplete;
- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (void)noteItemProcessed:(id)a0;

@end
