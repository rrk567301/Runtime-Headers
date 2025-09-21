@class TSTExpressionNode;

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment

@property (nonatomic) char inInvalidate;
@property (retain, nonatomic) TSTExpressionNode *expressionNode;
@property (nonatomic, getter=isActive) char active;
@property (nonatomic, getter=isSelected) char selected;
@property (nonatomic, getter=isHighlighted) char highlighted;
@property (nonatomic, getter=neverShowsMenu) char neverShowsMenu;
@property (nonatomic) struct CGImage { } *cachedImage;
@property (nonatomic) double cachedImageScreenScale;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)detokenizedText;
- (id)initWithContext:(id)a0 expressionNode:(id)a1;
- (id)copyIntoContext:(id)a0;
- (id)copyIntoContext:(id)a0 bakeModes:(char)a1;
- (id)formulaPlainText;
- (void)requestRedraw;

@end
