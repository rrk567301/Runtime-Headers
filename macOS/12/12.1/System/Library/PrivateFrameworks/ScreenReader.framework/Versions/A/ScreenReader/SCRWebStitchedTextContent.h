@class NSMutableArray;

@interface SCRWebStitchedTextContent : NSObject

@property (retain, nonatomic) NSMutableArray *lines;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)valueDescription;
- (id)lastLine;
- (void)clearAll;
- (id)attributedValueDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_buildAttributedDescriptionWithLineDelim:(id)a0 phraseDelim:(id)a1 tokenDelim:(id)a2 includeLineNumbers:(BOOL)a3 includeTokens:(BOOL)a4;
- (void)addAttributedString:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forElement:(id)a2;
- (void)addLine;
- (void)addString:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
