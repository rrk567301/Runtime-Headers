@class NSArray;

@interface IMKUISingleCandidateListView : IMKUICandidateListView

@property (retain, nonatomic) NSArray *selectionKeys;

- (void).cxx_destruct;
- (id)viewForLineWithIndex:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didUpdateViewBounds;
- (id)groupTitleForLineWithIndex:(long long)a0;

@end
