@class NSDate;

@interface HMDWirelessLoadManager : NSObject

@property (readonly, nonatomic) int btLoad;
@property (readonly, nonatomic) int btAudioTask;
@property (readonly, nonatomic) int btNonAudioTask;
@property (readonly, nonatomic) NSDate *lastLoadTimestamp;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)getBtLoadData;

@end
