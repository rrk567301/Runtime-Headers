@class NSString, WFVariableAttachment, NSFont;

@interface WFVariableAttachmentCell : NSObject <NSTextAttachmentCell>

@property (nonatomic) struct CGSize { double width; double height; } cachedImageSize;
@property (nonatomic) unsigned long long cachedImageControlState;
@property (retain, nonatomic) NSFont *cachedImageFont;
@property (copy, nonatomic) NSString *cachedImageVariableName;
@property (weak) WFVariableAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })cellBaselineOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (void)highlight:(BOOL)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 atCharacterIndex:(unsigned long long)a3 untilMouseUp:(BOOL)a4;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (BOOL)wantsToTrackMouse;
- (BOOL)wantsToTrackMouseForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 atCharacterIndex:(unsigned long long)a3;
- (void)clearCachedImage;
- (void)_drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (unsigned long long)currentControlState;

@end
