@class NSArray;

@interface CKVDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}

- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (id)initWithDatabaseValueArray:(id)a0;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;

@end
