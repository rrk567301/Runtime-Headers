@interface MNNavigationServiceCallback_DidChangeVoiceGuidanceLevel : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long voiceGuidanceLevel;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
