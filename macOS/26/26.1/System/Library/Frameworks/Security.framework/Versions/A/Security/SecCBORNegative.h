@interface SecCBORNegative : SecCBORValue {
    long long m_data;
}

- (void)write:(id)a0;
- (long long)compare:(id)a0;
- (id)initWith:(long long)a0;
- (int)fieldType;
- (id)getLabel;

@end
