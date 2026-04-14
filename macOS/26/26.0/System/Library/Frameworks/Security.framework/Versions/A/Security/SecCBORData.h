@class NSData;

@interface SecCBORData : SecCBORValue {
    NSData *m_data;
}

- (int)fieldType;
- (void)write:(id)a0;
- (id)initWith:(id)a0;
- (void).cxx_destruct;

@end
