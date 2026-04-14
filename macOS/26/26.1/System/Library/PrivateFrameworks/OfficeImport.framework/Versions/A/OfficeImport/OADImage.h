@class OADMovie, OADOle, OADShapeGeometry;

@interface OADImage : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}

- (void)setGeometry:(id)a0;
- (id)imageProperties;
- (id)geometry;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)movie;
- (void)setMovie:(id)a0;
- (void)setOle:(id)a0;
- (id)createImageFill;
- (id)ole;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)createPictureFramePresetGeometry;
- (id)initWithBlipRef:(id)a0;
- (void)setParentTextListStyle:(id)a0;

@end
