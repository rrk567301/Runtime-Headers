@class NSString;

@interface AXVBrailleWord : NSObject <NSCopying>

@property (copy, nonatomic) NSString *brailleString;
@property (copy, nonatomic) NSString *transliterationWord;
@property (nonatomic) double fontSize;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightCharacterRange;
@property (nonatomic) unsigned long long brailleCursorIndex;
@property (nonatomic) char isBold;
@property (nonatomic) char isItalic;
@property (nonatomic) char isUnderlined;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_isEqualToBrailleWord:(id)a0;

@end
