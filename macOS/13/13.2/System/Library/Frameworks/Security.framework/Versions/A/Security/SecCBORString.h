@class NSString;

@interface SecCBORString : SecCBORValue {
    NSString *m_data;
}

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (int)fieldType;
- (void)write:(id)a0;
- (id)initWith:(id)a0;
- (id)getLabel;

@end
