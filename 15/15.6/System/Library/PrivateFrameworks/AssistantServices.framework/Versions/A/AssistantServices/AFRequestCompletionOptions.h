@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) AFTriggerlessListeningOptions *triggerlessListeningOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithShowUIDuringListening:(char)a0 playAlertBeforeListening:(char)a1;

@end
