@class NSMutableDictionary, ML3DatabaseConnection;

@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary {
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
