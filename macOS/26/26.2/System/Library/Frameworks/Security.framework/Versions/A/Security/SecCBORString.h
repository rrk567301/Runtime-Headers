@class NSString;

@interface SecCBORString : SecCBORValue {
    NSString *m_data;
}

- (long long)compare:(id)a0;
- (void)write:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (int)fieldType;
- (id)getLabel;

@end
