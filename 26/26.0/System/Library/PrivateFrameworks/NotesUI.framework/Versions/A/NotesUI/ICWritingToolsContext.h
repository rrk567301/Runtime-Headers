@class NSDictionary, NSAttributedString;

@interface ICWritingToolsContext : NSWritingToolsCoordinatorContext

@property (retain, nonatomic) NSDictionary *rangeMapping;
@property (retain, nonatomic) NSAttributedString *originalString;

- (void).cxx_destruct;
- (void)updateRangeMapping:(id)a0 withinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithAttributedString:(id)a0 originalString:(id)a1 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 rangeMapping:(id)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInOriginalStringCorrespondingToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
