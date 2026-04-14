@class NSArray;

@interface SEMDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}

- (id)description;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (id)init;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;
- (id)initWithDatabaseValueArray:(id)a0;

@end
