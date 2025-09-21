@interface QCImagePort : QCObjectPort {
    void *_unused5[4];
}

+ (Class)baseClass;

- (id)value;
- (char)setValue:(id)a0;
- (Class)objectClass;
- (Class)valueClass;
- (id)stateValue;
- (char)setStateValue:(id)a0;
- (id)imageValue;
- (void)setImageValue:(id)a0;
- (char)acceptValuesOfClass:(Class)a0;
- (void)drawPortView:(id)a0;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (void)resetParameterView:(id)a0;
- (id)setupParameterView;
- (id)tooltipExtensionView;
- (struct CGSize { double x0; double x1; })tooltipExtensionViewSize:(id)a0;
- (id)tooltipString;

@end
