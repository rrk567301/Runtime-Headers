@class NSString, NSImage, NSURL, NSFont, NSColor;
@protocol VUINetworkRequestLoader;

@interface VUIMonogramDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSFont *font;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) long long scaleMode;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *textColor;
@property (nonatomic) double upscaleAdjustment;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSColor *fillColor;
@property (nonatomic) BOOL shouldFallBackToSilhouette;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSColor *borderColor;
@property (weak, nonatomic) id<VUINetworkRequestLoader> requestLoader;
@property (retain, nonatomic) NSImage *placeholderImage;
@property (nonatomic) BOOL optimizedImageRendering;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithType:(unsigned long long)a0;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 imageURL:(id)a2 font:(id)a3;
- (unsigned long long)preferedMonogramType;

@end
