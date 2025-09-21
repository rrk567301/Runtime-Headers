@class NSString, NSColor, NSShadow;

@interface VUIRemoteImageDescriptor : NSObject

@property (readonly, nonatomic) NSString *src;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) struct CGSize { double width; double height; } boundingSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGSize { double width; double height; } downloadSize;
@property (nonatomic) char loadsImmediately;
@property (nonatomic) char displayScaleIsPointMultiplier;
@property (nonatomic, getter=isTemplated) char templated;
@property (nonatomic, getter=shouldRenderAsTemplate) char renderAsTemplate;
@property (copy, nonatomic) NSString *extension;
@property (copy, nonatomic) NSString *p3Specifier;
@property (copy, nonatomic) NSString *cropCode;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *tintColor;
@property (retain, nonatomic) NSColor *highlightColor;
@property (nonatomic) long long preferredVibrancy;
@property (retain, nonatomic) NSColor *placeholderColor;
@property (copy, nonatomic) NSString *placeholderSrc;
@property (nonatomic) unsigned long long decoratorType;
@property (nonatomic) long long scaleMode;
@property (nonatomic) char continuousBorder;
@property (nonatomic) struct _VUICornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (retain, nonatomic) NSColor *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) char animatesShadowChanges;
@property (copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) char optimizedImageRendering;
@property (nonatomic) char clearsExisting;
@property (nonatomic) char sizeComputationOnly;

- (void).cxx_destruct;
- (id)initWithSrc:(id)a0 size:(struct CGSize { double x0; double x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithSrc:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
