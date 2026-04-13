@class NSString, NSDictionary;

@interface STGenericIntentRequest : AFSiriRequest {
    NSString *_appIdentifier;
    NSString *_intentString;
    NSString *_utterance;
    NSDictionary *_info;
}

@property (nonatomic, setter=_setLaunchToForeground:) BOOL _launchToForeground;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)info;
- (id)appIdentifier;
- (id)utterance;
- (id)_af_analyticsContextDescription;
- (BOOL)_makeAppFrontmost;
- (id)responseWithCode:(long long)a0;
- (BOOL)isForegroundLaunch;
- (id)initWithAppIdentifier:(id)a0 intentString:(id)a1 utterance:(id)a2 info:(id)a3;
- (id)intentString;

@end
