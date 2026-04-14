@class NSMutableAttributedString;

@interface _AXFAttributedStringProxy : NSProxy

@property (readonly, nonatomic) NSMutableAttributedString *_attributedString;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)copy;
- (id)initWithAttributedString:(id)a0;
- (id)mutableCopy;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyAttributedStringFromAXFProxy;

@end
