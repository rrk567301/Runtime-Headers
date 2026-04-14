@interface SPIPowerLogger : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned char process;

+ (id)_staticWrappedInitWithCurrentProcess;
+ (id)_staticWrappedInitWithProcessIdentifier:(int)a0;

- (id)captureSnapshot;
- (id)initWithCurrentProcess;
- (id)init;
- (id)initWithProcessIdentifier:(int)a0;

@end
