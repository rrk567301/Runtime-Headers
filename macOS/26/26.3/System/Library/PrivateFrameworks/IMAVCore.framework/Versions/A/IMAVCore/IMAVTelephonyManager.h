@interface IMAVTelephonyManager : NSObject

@property (class, readonly, nonatomic) IMAVTelephonyManager *sharedInstance;

- (id)init;
- (void)_chatStateChanged:(id)a0;
- (void)dealloc;

@end
