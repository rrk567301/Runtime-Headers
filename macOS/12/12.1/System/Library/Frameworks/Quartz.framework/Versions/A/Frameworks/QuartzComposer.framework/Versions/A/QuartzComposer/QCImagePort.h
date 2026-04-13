@interface QCImagePort : QCObjectPort {
    void *_unused5[4];
}

+ (Class)baseClass;

- (id)value;
- (BOOL)setValue:(id)a0;
- (Class)objectClass;
- (Class)valueClass;
- (BOOL)setStateValue:(id)a0;
- (id)stateValue;
- (id)imageValue;
- (void)setImageValue:(id)a0;
- (id)tooltipString;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (id)setupParameterView;
- (void)resetParameterView:(id)a0;
- (id)tooltipExtensionView;
- (struct CGSize { double x0; double x1; })tooltipExtensionViewSize:(id)a0;
- (void)drawPortView:(id)a0;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;

@end
