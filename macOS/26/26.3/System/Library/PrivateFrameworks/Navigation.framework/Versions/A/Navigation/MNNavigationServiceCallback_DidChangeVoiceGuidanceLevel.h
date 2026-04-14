@interface MNNavigationServiceCallback_DidChangeVoiceGuidanceLevel : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long voiceGuidanceLevel;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
