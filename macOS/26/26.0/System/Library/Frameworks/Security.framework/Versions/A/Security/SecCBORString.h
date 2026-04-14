@class NSString;

@interface SecCBORString : SecCBORValue {
    NSString *m_data;
}

- (int)fieldType;
- (long long)compare:(id)a0;
- (void)write:(id)a0;
- (id)initWith:(id)a0;
- (void).cxx_destruct;
- (id)getLabel;

@end
