@class NSAttributedString;

@interface AXVBrailleInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *brailleWithTransliteration;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } brailleCellRange;
@property (nonatomic) long long brailleCursorIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqualToBrailleInfo:(id)a0;

@end
