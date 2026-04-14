@class NSArray, NSSet, NSString, _TtC6AppKit35_NSAttributedStringFallbackFontInfo, NSParagraphStyle;

@interface _NSTextFormattingViewControllerFormattingDescriptor : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* function */ fonts;
    void /* function */ textColors;
    void /* function */ textBackgroundColors;
    void /* function */ textLists;
    void /* function */ _highlights;
    void /* function */ _formattingStyleKey;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) _TtC6AppKit35_NSAttributedStringFallbackFontInfo *_fallbackFontInfo;
@property (nonatomic, copy) NSArray *fonts;
@property (nonatomic, copy) NSArray *textColors;
@property (nonatomic, copy) NSArray *textBackgroundColors;
@property (nonatomic) double _lineHeightMultiple;
@property (nonatomic) BOOL underlinePresent;
@property (nonatomic) BOOL strikethroughPresent;
@property (nonatomic) long long _textAlignment;
@property (nonatomic) BOOL _textAlignmentFullyJustified;
@property (nonatomic, copy) NSSet *textLists;
@property (nonatomic, copy) NSSet *_highlights;
@property (nonatomic, copy) NSString *_formattingStyleKey;
@property (nonatomic, retain) NSParagraphStyle *_paragraphStyle;
@property (nonatomic) BOOL _hasBlockquote;
@property (nonatomic) BOOL _canToggleBold;
@property (nonatomic) BOOL _canToggleItalic;

- (id)initWithAttributes:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setUpWith:(id)a0;

@end
