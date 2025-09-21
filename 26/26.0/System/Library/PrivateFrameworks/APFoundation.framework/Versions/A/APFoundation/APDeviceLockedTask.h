@interface APDeviceLockedTask : NSObject

@property (readonly, nonatomic) id /* block */ taskHandler;

+ (BOOL)deviceUnlockedSinceBoot;

- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
