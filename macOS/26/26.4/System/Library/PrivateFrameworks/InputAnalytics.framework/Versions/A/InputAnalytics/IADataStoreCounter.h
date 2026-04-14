@interface IADataStoreCounter : IADataStoreObject

@property (readonly, nonatomic) unsigned long long count;

+ (id)type;

- (BOOL)increment;
- (BOOL)destroy;
- (BOOL)decrement;
- (BOOL)persist;
- (BOOL)updateWithCount:(unsigned long long)a0;
- (id)initWithDatastoreHandle:(id)a0 andName:(id)a1 shouldBeCreated:(BOOL)a2;

@end
