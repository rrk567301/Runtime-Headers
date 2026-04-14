@class NSError, HMLightProfileSettings;

@interface HMHomeFetchLightProfileSettingsResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSError *error;
@property (readonly, copy) HMLightProfileSettings *settings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)initWithSettings:(id)a0;

@end
