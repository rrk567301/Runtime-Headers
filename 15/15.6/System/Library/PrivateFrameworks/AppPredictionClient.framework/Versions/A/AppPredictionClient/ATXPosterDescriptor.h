@class NSNumber, NSString, ATXPosterDescriptorGalleryOptions;

@interface ATXPosterDescriptor : NSObject <NSSecureCoding, NSCopying> {
    NSString *_coreIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *score;
@property (readonly, copy, nonatomic) NSString *coreIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) ATXPosterDescriptorGalleryOptions *galleryOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 extensionBundleIdentifier:(id)a1 containerBundleIdentifier:(id)a2 galleryOptions:(id)a3;
- (char)isEqualToATXPosterDescriptor:(id)a0;

@end
