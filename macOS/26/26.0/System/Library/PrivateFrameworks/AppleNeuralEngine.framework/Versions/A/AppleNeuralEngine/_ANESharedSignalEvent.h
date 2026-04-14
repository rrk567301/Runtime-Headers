@class IOSurfaceSharedEvent;

@interface _ANESharedSignalEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned long long value;
@property (readonly, nonatomic) unsigned int symbolIndex;
@property (nonatomic) unsigned long long agentMask;
@property (readonly, nonatomic) long long eventType;

+ (id)new;
+ (id)signalEventWithValue:(unsigned long long)a0 symbolIndex:(unsigned int)a1 eventType:(long long)a2 sharedEvent:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(unsigned long long)a0 symbolIndex:(unsigned int)a1 eventType:(long long)a2 sharedEvent:(id)a3 agentMask:(unsigned long long)a4;
- (id)waitEvent;

@end
