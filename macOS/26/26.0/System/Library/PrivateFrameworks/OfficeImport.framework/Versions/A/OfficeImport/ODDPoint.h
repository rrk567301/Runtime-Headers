@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)a0 order:(unsigned long long)a1 array:(id *)a2;

- (int)type;
- (id)init;
- (void)setText:(id)a0;
- (id)text;
- (void)setType:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)shapeProperties;
- (id)propertySet;

@end
