@interface SPIPowerLogger : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned char process;

+ (id)_staticWrappedInitWithCurrentProcess;
+ (id)_staticWrappedInitWithProcessIdentifier:(int)a0;

- (id)captureSnapshot;
- (id)initWithProcessIdentifier:(int)a0;
- (id)initWithCurrentProcess;
- (id)init;

@end
