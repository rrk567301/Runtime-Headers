@interface APDeviceLockedTask : NSObject

@property (readonly, nonatomic) id /* block */ taskHandler;

+ (char)deviceUnlockedSinceBoot;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;

@end
