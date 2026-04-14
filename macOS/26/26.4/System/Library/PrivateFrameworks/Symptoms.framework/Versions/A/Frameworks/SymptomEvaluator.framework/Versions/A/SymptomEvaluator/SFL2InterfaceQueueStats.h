@class NSString;

@interface SFL2InterfaceQueueStats : NSObject

@property (nonatomic) int interfaceType;
@property (retain, nonatomic) NSString *interfaceName;
@property (nonatomic) unsigned char slot;
@property (nonatomic) unsigned long long averageQueueDelay;
@property (nonatomic) unsigned long long minimumQueueDelay;
@property (nonatomic) unsigned long long maximumQueueDelay;

+ (id)interfaceQueueStatsSlotToString:(unsigned char)a0;

- (void).cxx_destruct;
- (id)description;

@end
