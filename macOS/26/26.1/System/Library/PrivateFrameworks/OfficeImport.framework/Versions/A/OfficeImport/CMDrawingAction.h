@interface CMDrawingAction : NSObject {
    int _type;
    id _value;
    float _floatValue;
}

- (int)type;
- (id)value;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (float)floatValue;
- (id)initWithType:(int)a0 andFloatValue:(float)a1;
- (id)initWithType:(int)a0 andValue:(id)a1;

@end
