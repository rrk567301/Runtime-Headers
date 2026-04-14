@class NSColor;

@interface MPArtworkImageAttachments : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSColor *textColor;
@property (readonly, nonatomic) BOOL hasTitle;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTextColor:(id)a0 hasTitle:(BOOL)a1;

@end
