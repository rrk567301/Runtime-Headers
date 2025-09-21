@class MUISenderHeaderColors, NSString, NSImage, CNContact;

@interface MUIAvatarImageGeneratorResult : NSObject {
    void /* unknown type, empty encoding */ publicDescriptionAddress;
    void /* unknown type, empty encoding */ underlyingImageProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_underlyingImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_image;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analysis;
    void /* unknown type, empty encoding */ $__lazy_storage_$_colors;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) BOOL hasImageProvider;
@property (nonatomic, retain) NSImage *image;
@property (nonatomic) long long avatarStyle;
@property (nonatomic) long long avatarType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) MUISenderHeaderColors *headerColors;

+ (id)circularPlaceholderResult;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canShowBorder;
- (id)init:(id)a0 address:(id)a1 imageProvider:(id /* block */)a2 style:(long long)a3 type:(long long)a4 hasImageProvider:(BOOL)a5;
- (id)initWithContact:(id)a0 address:(id)a1 image:(id)a2 style:(long long)a3 type:(long long)a4;
- (id)initWithContact:(id)a0 address:(id)a1 imageProvider:(id /* block */)a2 style:(long long)a3 type:(long long)a4;
- (BOOL)needsBorder;

@end
