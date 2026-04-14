@class PKSearchQueryItem;

@interface ICPencilKitTextFindingResult : ICTextFindingResult

@property (nonatomic) unsigned long long order;
@property (nonatomic) struct CGSize { double width; double height; } drawingSize;
@property (retain, nonatomic) PKSearchQueryItem *searchQueryItem;

- (long long)compare:(id)a0;
- (double)cornerRadius;
- (void).cxx_destruct;
- (id)framesForHighlightInTextView:(id)a0;
- (void)selectInTextView:(id)a0;

@end
