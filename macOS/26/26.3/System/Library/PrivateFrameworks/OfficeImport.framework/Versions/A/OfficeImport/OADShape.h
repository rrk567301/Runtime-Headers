@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}

@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds;

- (int)type;
- (id)geometry;
- (id)shapeStyle;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setGeometry:(id)a0;
- (id)shapeProperties;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)createPresetGeometryWithShapeType:(int)a0;
- (void)flattenProperties;
- (BOOL)isTextBox;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (void)setTextBody:(id)a0;
- (id)textBody;

@end
