@class SHMusicalFeaturesConfiguration, NSString, SHRange;

@interface SHCatalogConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) SHMusicalFeaturesConfiguration *musicalFeaturesConfiguration;
@property (copy) NSString *installationID;
@property (retain) SHRange *signatureDurationRange;
@property double streamingBufferDuration;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
