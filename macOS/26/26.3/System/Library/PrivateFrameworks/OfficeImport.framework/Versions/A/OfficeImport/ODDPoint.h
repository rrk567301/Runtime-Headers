@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)a0 order:(unsigned long long)a1 array:(id *)a2;

- (void)setType:(int)a0;
- (int)type;
- (id)description;
- (id)init;
- (id)text;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)shapeProperties;
- (id)propertySet;

@end
