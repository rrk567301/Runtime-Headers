@interface MNNavigationServiceCallback_DidChangeVoiceGuidanceLevel : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long voiceGuidanceLevel;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end
