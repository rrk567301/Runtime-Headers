@class NSMutableArray;

@interface SecCBORArray : SecCBORValue {
    NSMutableArray *m_data;
}

- (void)write:(id)a0;
- (int)fieldType;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (id)init;

@end
