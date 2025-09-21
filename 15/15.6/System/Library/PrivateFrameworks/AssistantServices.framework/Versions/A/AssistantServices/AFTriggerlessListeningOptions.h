@interface AFTriggerlessListeningOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char showUIDuringListening;
@property (nonatomic) char playAlertBeforeListening;
@property (readonly, nonatomic) char showUIBeforeListening;
@property (readonly, nonatomic) char beepBeforeListening;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double endpointDelay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithShowUIDuringListening:(char)a0 playAlertBeforeListening:(char)a1;

@end
