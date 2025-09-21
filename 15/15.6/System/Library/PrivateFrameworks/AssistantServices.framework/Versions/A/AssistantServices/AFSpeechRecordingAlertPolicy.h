@class AFSpeechRecordingAlertBehavior;

@interface AFSpeechRecordingAlertPolicy : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *startingAlertBehavior;
@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *stoppedAlertBehavior;
@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *stoppedWithErrorAlertBehavior;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithStartingAlertBehavior:(id)a0 stoppedAlertBehavior:(id)a1 stoppedWithErrorAlertBehavior:(id)a2;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
