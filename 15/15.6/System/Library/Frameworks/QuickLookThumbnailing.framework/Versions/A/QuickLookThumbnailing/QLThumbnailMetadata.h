@class NSString, NSDictionary;

@interface QLThumbnailMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int inlinePreviewMode;
@property (nonatomic) long long baseline;
@property (nonatomic) int iconFlavor;
@property (copy, nonatomic) NSString *extensionBadge;
@property (nonatomic) char isLowQuality;
@property (nonatomic) char hasIconModeApplied;
@property (copy, nonatomic) NSDictionary *additionalProperties;

+ (id)thumbnailMetadataFromPropertiesDictionary:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)propertiesDict;

@end
