@class IOSurfaceSharedEvent;

@interface _ANESharedWaitEvent : NSObject

@property (readonly, nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned long long value;
@property (readonly, nonatomic) unsigned long long eventType;

+ (id)new;
+ (id)waitEventWithValue:(unsigned long long)a0 sharedEvent:(id)a1;
+ (id)waitEventWithValue:(unsigned long long)a0 sharedEvent:(id)a1 eventType:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithValue:(unsigned long long)a0 sharedEvent:(id)a1 eventType:(unsigned long long)a2;

@end
