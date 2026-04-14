@class NSString, NSDictionary;

@interface QLThumbnailMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int inlinePreviewMode;
@property (nonatomic) long long baseline;
@property (nonatomic) int iconFlavor;
@property (copy, nonatomic) NSString *extensionBadge;
@property (nonatomic) BOOL isLowQuality;
@property (nonatomic) BOOL hasIconModeApplied;
@property (copy, nonatomic) NSDictionary *additionalProperties;

+ (id)thumbnailMetadataFromPropertiesDictionary:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)propertiesDict;

@end
