@class NSData;

@interface SecCBORData : SecCBORValue {
    NSData *m_data;
}

- (void).cxx_destruct;
- (int)fieldType;
- (void)write:(id)a0;
- (id)initWith:(id)a0;

@end
