@interface NEFilterRemediationVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)needRulesVerdict;

- (long long)filterAction;

@end
