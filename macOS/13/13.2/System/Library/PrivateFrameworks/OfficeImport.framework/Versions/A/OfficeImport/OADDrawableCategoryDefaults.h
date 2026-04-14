@class OADTextBodyProperties, OADTextListStyle, OADShapeProperties;

@interface OADDrawableCategoryDefaults : NSObject {
    OADShapeProperties *mShapeProperties;
    OADTextBodyProperties *mTextBodyProperties;
    OADTextListStyle *mTextListStyle;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (void)setShapeProperties:(id)a0;
- (void)setTextBodyProperties:(id)a0;
- (id)textBodyProperties;
- (void)setTextListStyle:(id)a0;
- (id)textListStyle;
- (id)shapeProperties;

@end
