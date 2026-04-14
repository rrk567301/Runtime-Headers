@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}

@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (id)geometry;
- (void)setGeometry:(id)a0;
- (id)shapeProperties;
- (void)setTextBody:(id)a0;
- (id)textBody;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)flattenProperties;
- (BOOL)isTextBox;
- (id)shapeStyle;
- (void)createPresetGeometryWithShapeType:(int)a0;

@end
