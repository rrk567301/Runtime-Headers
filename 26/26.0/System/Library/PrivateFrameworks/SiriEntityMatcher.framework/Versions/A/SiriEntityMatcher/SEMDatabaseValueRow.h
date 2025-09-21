@class NSArray;

@interface SEMDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}

- (unsigned long long)count;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;
- (id)initWithDatabaseValueArray:(id)a0;

@end
