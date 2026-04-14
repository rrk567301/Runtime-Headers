@interface OADValueColorTransform : OADColorTransform {
    float mValue;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(float)a0;
- (float)value;

@end
