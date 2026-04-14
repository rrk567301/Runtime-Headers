@class NSArray;

@interface SEMDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}

- (void).cxx_destruct;
- (id)init;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (id)description;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;
- (id)initWithDatabaseValueArray:(id)a0;

@end
