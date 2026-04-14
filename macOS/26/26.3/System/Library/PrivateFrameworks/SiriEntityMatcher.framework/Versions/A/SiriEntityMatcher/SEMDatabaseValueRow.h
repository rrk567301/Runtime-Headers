@class NSArray;

@interface SEMDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}

- (unsigned long long)count;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;
- (id)initWithDatabaseValueArray:(id)a0;

@end
