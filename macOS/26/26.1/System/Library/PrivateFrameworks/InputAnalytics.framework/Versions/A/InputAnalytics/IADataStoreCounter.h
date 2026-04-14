@interface IADataStoreCounter : IADataStoreObject

@property (readonly, nonatomic) unsigned long long count;

+ (id)type;

- (BOOL)decrement;
- (BOOL)increment;
- (BOOL)persist;
- (BOOL)destroy;
- (BOOL)updateWithCount:(unsigned long long)a0;
- (id)initWithDatastoreHandle:(id)a0 andName:(id)a1 shouldBeCreated:(BOOL)a2;

@end
