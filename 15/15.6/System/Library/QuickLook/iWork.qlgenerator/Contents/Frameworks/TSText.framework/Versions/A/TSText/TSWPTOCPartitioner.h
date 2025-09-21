@class TSWPTOCInfo;

@interface TSWPTOCPartitioner : NSObject <TSDPartitioner>

@property (readonly, weak, nonatomic) TSWPTOCInfo *info;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } totalPartitionFrame;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (id)hintForLayout:(id)a0;
- (id)layoutForHint:(id)a0 parentLayout:(id)a1;
- (id)nextHintForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(char)a3 outFinished:(out char *)a4;
- (id)nextLayoutForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(char)a3 outFinished:(out char *)a4;
- (void)setLayoutPartititionsRightToLeft:(char)a0 contentPartitionsRightToLeft:(char)a1;
- (char)didHint:(id)a0 syncWithNextHint:(id)a1 horizontally:(char)a2;

@end
