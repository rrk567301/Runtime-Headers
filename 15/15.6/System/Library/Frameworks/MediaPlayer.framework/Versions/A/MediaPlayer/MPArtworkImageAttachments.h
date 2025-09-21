@class NSColor, MPArtworkGradientInfo;

@interface MPArtworkImageAttachments : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSColor *textColor;
@property (readonly, nonatomic) char hasTitle;
@property (readonly, nonatomic) MPArtworkGradientInfo *gradient;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTextColor:(id)a0 gradientInfo:(id)a1 hasTitle:(char)a2;
- (id)initWithTextColor:(id)a0 hasTitle:(char)a1;

@end
