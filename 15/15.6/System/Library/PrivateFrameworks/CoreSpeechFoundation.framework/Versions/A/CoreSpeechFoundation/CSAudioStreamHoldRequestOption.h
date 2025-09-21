@interface CSAudioStreamHoldRequestOption : NSObject

@property (readonly, nonatomic) unsigned long long clientIdentity;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) char requireRecordModeLock;
@property (readonly, nonatomic) char requireListeningMicIndicatorLock;

+ (id)defaultOptionWithTimeout:(double)a0;

- (id)initWithXPCObject:(id)a0;
- (id)initWithTimeout:(double)a0 clientIdentity:(unsigned long long)a1 requireRecordModeLock:(char)a2 requireListeningMicIndicatorLock:(char)a3;
- (id)xpcObject;

@end
