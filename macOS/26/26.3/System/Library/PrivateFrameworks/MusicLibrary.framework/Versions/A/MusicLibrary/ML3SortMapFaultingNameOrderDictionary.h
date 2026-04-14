@class NSMutableDictionary, ML3DatabaseConnection;

@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary {
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;

@end
