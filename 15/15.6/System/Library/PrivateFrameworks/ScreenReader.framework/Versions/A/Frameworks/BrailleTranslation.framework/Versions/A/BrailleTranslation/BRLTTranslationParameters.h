@class NSString, BRLTTextFormattingRanges;

@interface BRLTTranslationParameters : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic, getter=isPartial) char partial;
@property (readonly, nonatomic) char useTechnicalTableIfPossible;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textPositionsRange;
@property (readonly, nonatomic) BRLTTextFormattingRanges *textFormattingRanges;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguage:(id)a0 mode:(unsigned long long)a1 partial:(char)a2 useTechnicalTable:(char)a3 textPositionsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 textFormattingRanges:(id)a5;

@end
