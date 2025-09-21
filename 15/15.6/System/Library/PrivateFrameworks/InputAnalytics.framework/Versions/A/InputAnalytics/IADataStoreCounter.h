@interface IADataStoreCounter : IADataStoreObject

@property (readonly, nonatomic) unsigned long long count;

+ (id)type;

- (char)decrement;
- (char)increment;
- (char)destroy;
- (char)persist;
- (char)updateWithCount:(unsigned long long)a0;
- (id)initWithDatastoreHandle:(id)a0 andName:(id)a1 shouldBeCreated:(char)a2;

@end
