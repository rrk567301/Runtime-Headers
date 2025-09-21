@class NSAttributedString;

@interface VCUIBadgedTextSegmentModel : NSObject {
    void /* unknown type, empty encoding */ range;
    void /* unknown type, empty encoding */ displayedRange;
}

@property (nonatomic, retain) NSAttributedString *text;
@property (nonatomic, retain) NSAttributedString *label;
@property (nonatomic) long long labelNumber;
@property (nonatomic) BOOL isWhiteSpace;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } nsRange;
@property (nonatomic, readonly) NSAttributedString *representedText;
@property (nonatomic, readonly) NSAttributedString *displayedText;

- (void).cxx_destruct;

@end
