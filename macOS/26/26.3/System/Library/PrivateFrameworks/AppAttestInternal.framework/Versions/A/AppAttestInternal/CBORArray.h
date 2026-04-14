@class NSMutableArray;

@interface CBORArray : CBORValue {
    NSMutableArray *m_data;
}

- (void)write:(id)a0;
- (id)init;
- (int)fieldType;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWith:(id)a0;

@end
