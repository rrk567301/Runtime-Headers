@class NSMutableArray;

@interface SecCBORArray : SecCBORValue {
    NSMutableArray *m_data;
}

- (int)fieldType;
- (id)init;
- (void)addObject:(id)a0;
- (void)write:(id)a0;
- (id)initWith:(id)a0;
- (void).cxx_destruct;

@end
