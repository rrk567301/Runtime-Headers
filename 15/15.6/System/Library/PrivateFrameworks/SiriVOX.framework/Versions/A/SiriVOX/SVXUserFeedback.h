@class NSString, SVXUserFeedbackVoiceContent, SVXUserFeedbackAudioContent;

@interface SVXUserFeedback : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) SVXUserFeedbackAudioContent *audioContent;
@property (readonly, copy, nonatomic) SVXUserFeedbackVoiceContent *voiceContent;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 contentType:(long long)a1 audioContent:(id)a2 voiceContent:(id)a3;

@end
