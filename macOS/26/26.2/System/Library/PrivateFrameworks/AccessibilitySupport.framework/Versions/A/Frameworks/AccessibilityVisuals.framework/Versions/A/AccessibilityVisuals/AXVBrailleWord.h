@class NSString;

@interface AXVBrailleWord : NSObject <NSCopying>

@property (copy, nonatomic) NSString *brailleString;
@property (copy, nonatomic) NSString *transliterationWord;
@property (nonatomic) double fontSize;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightCharacterRange;
@property (nonatomic) unsigned long long brailleCursorIndex;
@property (nonatomic) BOOL isBold;
@property (nonatomic) BOOL isItalic;
@property (nonatomic) BOOL isUnderlined;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)_isEqualToBrailleWord:(id)a0;

@end
