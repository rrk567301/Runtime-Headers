@class NSString, NSArray, ATXComplication, NSUUID, ATXFaceGalleryItem;

@interface ATXPosterConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic, getter=isSelected) char selected;
@property (readonly, nonatomic) ATXComplication *inlineComplication;
@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, copy, nonatomic) NSArray *landscapeComplications;
@property (readonly, nonatomic) NSUUID *modeUUID;
@property (readonly, copy, nonatomic) NSString *font;
@property (readonly, copy, nonatomic) NSString *color;
@property (readonly, copy, nonatomic) NSString *numberingSystem;
@property (readonly, copy, nonatomic) NSString *posterUUID;
@property (readonly, nonatomic) ATXFaceGalleryItem *galleryItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 active:(char)a1 selected:(char)a2 inlineComplication:(id)a3 complications:(id)a4 landscapeComplications:(id)a5 modeUUID:(id)a6 font:(id)a7 color:(id)a8 numberingSystem:(id)a9 posterUUID:(id)a10 galleryItem:(id)a11;
- (id)initWithExtensionBundleIdentifier:(id)a0 active:(char)a1 selected:(char)a2 inlineComplication:(id)a3 complications:(id)a4 modeUUID:(id)a5 font:(id)a6 color:(id)a7 numberingSystem:(id)a8 posterUUID:(id)a9 galleryItem:(id)a10;
- (char)isEqualToATXPosterConfiguration:(id)a0;

@end
