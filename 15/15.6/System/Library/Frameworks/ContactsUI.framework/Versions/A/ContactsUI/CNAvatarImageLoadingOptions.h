@interface CNAvatarImageLoadingOptions : NSObject

@property double diameter;
@property long long backgroundStyle;
@property char selected;
@property char maskedByCircle;

+ (id)defaultOptions;
+ (id)optionsWithDiameter:(double)a0 backgroundStyle:(long long)a1 selected:(char)a2 maskedByCircle:(char)a3;

@end
