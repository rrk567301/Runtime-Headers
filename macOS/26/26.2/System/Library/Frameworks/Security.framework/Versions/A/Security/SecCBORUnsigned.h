@interface SecCBORUnsigned : SecCBORValue {
    unsigned long long m_data;
}

- (long long)compare:(id)a0;
- (void)write:(id)a0;
- (id)initWith:(unsigned long long)a0;
- (int)fieldType;
- (id)getLabel;

@end
