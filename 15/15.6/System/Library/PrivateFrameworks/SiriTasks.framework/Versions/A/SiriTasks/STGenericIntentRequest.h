@class NSString, NSDictionary;

@interface STGenericIntentRequest : AFSiriRequest {
    NSString *_appIdentifier;
    NSString *_intentString;
    NSString *_utterance;
    NSDictionary *_info;
}

@property (nonatomic, setter=_setLaunchToForeground:) char _launchToForeground;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)info;
- (id)appIdentifier;
- (id)utterance;
- (id)_af_analyticsContextDescription;
- (char)_makeAppFrontmost;
- (id)initWithAppIdentifier:(id)a0 intentString:(id)a1 utterance:(id)a2 info:(id)a3;
- (id)intentString;
- (char)isForegroundLaunch;
- (id)responseWithCode:(long long)a0;

@end
