@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) AFTriggerlessListeningOptions *triggerlessListeningOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithShowUIDuringListening:(BOOL)a0 playAlertBeforeListening:(BOOL)a1;

@end
