@class EDTextBox, NSString, EDComment, EDAnchor, NSMutableDictionary, EDSheet;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
    EDSheet *mSheet;
    id mClientState;
    EDAnchor *mAnchor;
    EDTextBox *mTextBox;
    EDComment *mComment;
    NSMutableDictionary *mTableModels;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
    BOOL mIsBoundsSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)comment;
- (BOOL)hasText;
- (void)setAnchor:(id)a0;
- (BOOL)hasBounds;
- (id)clientState;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setComment:(id)a0;
- (void)setClientState:(id)a0;
- (void)setSheet:(id)a0;
- (id)sheet;
- (id)textBox;
- (void)setTableModels:(id)a0;
- (BOOL)areBoundsSet;
- (void)setTextBox:(id)a0;
- (id)tableModels;

@end
