@class NSString, NSAttributedString, NSArray;

@interface AXVBrailleInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *brailleWithTransliteration;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } brailleCellRange;
@property (nonatomic) long long brailleCursorIndex;
@property (nonatomic) long long brailleStatusPosition;
@property (copy, nonatomic) NSString *brailleStatus;
@property (nonatomic) BOOL brailleDisplayingAnnouncement;
@property (retain, nonatomic) NSArray *brailleBoldRanges;
@property (retain, nonatomic) NSArray *brailleItalicRanges;
@property (retain, nonatomic) NSArray *brailleUnderlineRanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqualToBrailleInfo:(id)a0;

@end
