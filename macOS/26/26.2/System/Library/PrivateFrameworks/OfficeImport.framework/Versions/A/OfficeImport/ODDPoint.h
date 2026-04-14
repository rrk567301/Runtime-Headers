@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)a0 order:(unsigned long long)a1 array:(id *)a2;

- (void)setText:(id)a0;
- (id)text;
- (void)setType:(int)a0;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)shapeProperties;
- (id)propertySet;

@end
