@class NSMutableAttributedString;

@interface _AXFAttributedStringProxy : NSProxy

@property (readonly, nonatomic) NSMutableAttributedString *_attributedString;

- (id)initWithAttributedString:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copy;
- (id)mutableCopy;
- (id)_copyAttributedStringFromAXFProxy;

@end
