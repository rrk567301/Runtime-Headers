@class IOSurfaceSharedEvent;

@interface _ANESharedWaitEvent : NSObject

@property (readonly, nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (readonly, nonatomic) unsigned long long value;

+ (id)new;
+ (id)waitEventWithValue:(unsigned long long)a0 sharedEvent:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithValue:(unsigned long long)a0 sharedEvent:(id)a1;

@end
