@interface OADValueColorTransform : OADColorTransform {
    float mValue;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (float)value;
- (void)setValue:(float)a0;

@end
