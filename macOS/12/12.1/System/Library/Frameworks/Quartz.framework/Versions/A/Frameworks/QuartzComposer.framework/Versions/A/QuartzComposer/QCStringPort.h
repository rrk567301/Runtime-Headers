@class NSString;

@interface QCStringPort : QCPort {
    NSString *_string;
    int _editorType;
    void *_unused3[3];
}

+ (Class)baseClass;

- (void)dealloc;
- (id)stringValue;
- (id)value;
- (BOOL)setValue:(id)a0;
- (void)setStringValue:(id)a0;
- (Class)valueClass;
- (BOOL)setStateValue:(id)a0;
- (id)stateValue;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (id)tooltipString;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;
- (void)setEditorType:(int)a0;
- (int)editorType;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (id)setupParameterView;
- (void)resetParameterView:(id)a0;
- (void)editValueWithEvent:(id)a0 inView:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;

@end
