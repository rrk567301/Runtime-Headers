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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isEqualToBrailleWord:(id)a0;

@end
