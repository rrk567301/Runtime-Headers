@interface CBORNegative : CBORValue {
    long long m_data;
}

- (void)write:(id)a0;
- (int)fieldType;
- (long long)compare:(id)a0;
- (id)initWith:(long long)a0;
- (id)getLabel;

@end
