@class NSMutableArray;

@interface CBORArray : CBORValue {
    NSMutableArray *m_data;
}

- (id)init;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (void)write:(id)a0;
- (int)fieldType;

@end
