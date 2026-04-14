@interface CMDrawingAction : NSObject {
    int _type;
    id _value;
    float _floatValue;
}

- (float)floatValue;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (void)dealloc;
- (id)initWithType:(int)a0 andFloatValue:(float)a1;
- (id)initWithType:(int)a0 andValue:(id)a1;

@end
