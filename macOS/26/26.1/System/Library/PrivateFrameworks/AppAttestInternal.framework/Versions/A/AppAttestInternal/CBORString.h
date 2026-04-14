@class NSString;

@interface CBORString : CBORValue {
    NSString *m_data;
}

- (void)write:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (int)fieldType;
- (id)getLabel;

@end
