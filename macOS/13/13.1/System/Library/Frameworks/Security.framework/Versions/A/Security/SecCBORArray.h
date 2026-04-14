@class NSMutableArray;

@interface SecCBORArray : SecCBORValue {
    NSMutableArray *m_data;
}

- (id)init;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (int)fieldType;
- (void)write:(id)a0;
- (id)initWith:(id)a0;

@end
