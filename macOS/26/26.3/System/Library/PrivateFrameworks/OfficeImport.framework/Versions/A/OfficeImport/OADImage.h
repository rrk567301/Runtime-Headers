@class OADMovie, OADOle, OADShapeGeometry;

@interface OADImage : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}

- (id)geometry;
- (id)imageProperties;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setGeometry:(id)a0;
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
