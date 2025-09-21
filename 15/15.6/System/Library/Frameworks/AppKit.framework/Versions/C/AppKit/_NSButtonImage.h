@class NSImage;

@interface _NSButtonImage : NSObject <NSCopying, NSCoding> {
    NSImage *image;
    char useDisabledEffect;
    char useHighlightEffect;
}

+ (void)initialize;
+ (id)image:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
