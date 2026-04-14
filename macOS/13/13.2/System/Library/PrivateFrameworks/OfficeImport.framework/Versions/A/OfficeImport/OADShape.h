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
- (void)setParentTextListStyle:(id)a0;
- (void)flattenProperties;
- (void)createPresetGeometryWithShapeType:(int)a0;
- (BOOL)isTextBox;
- (id)textBody;
- (void)setTextBody:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;
- (id)shapeProperties;
- (id)shapeStyle;

@end
