@interface QCMeshPort : QCObjectPort {
    void *_unused5[4];
}

+ (Class)baseClass;

- (Class)objectClass;
- (BOOL)setValue:(id)a0;
- (id)value;
- (Class)valueClass;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (void)drawPortView:(id)a0;
- (id)meshValue;
- (void)setMeshValue:(id)a0;
- (id)tooltipExtensionView;
- (struct CGSize { double x0; double x1; })tooltipExtensionViewSize:(id)a0;
- (id)tooltipString;

@end
