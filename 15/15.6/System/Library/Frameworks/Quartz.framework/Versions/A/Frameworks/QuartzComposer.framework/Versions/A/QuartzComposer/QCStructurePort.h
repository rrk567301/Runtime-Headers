@interface QCStructurePort : QCObjectPort {
    void *_unused5[4];
}

+ (Class)baseClass;

- (id)value;
- (char)setValue:(id)a0;
- (Class)objectClass;
- (Class)valueClass;
- (id)stateValue;
- (char)setStateValue:(id)a0;
- (char)_printStructure:(id)a0 toString:(id)a1 linePrefix:(id)a2 maxLines:(long long *)a3;
- (char)acceptValuesOfClass:(Class)a0;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (void)resetParameterView:(id)a0;
- (void)setStructureValue:(id)a0;
- (id)setupParameterView;
- (id)streamValue;
- (id)structureValue;
- (id)tooltipString;

@end
