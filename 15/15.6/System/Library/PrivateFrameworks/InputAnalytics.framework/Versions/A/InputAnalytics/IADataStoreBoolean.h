@interface IADataStoreBoolean : IADataStoreObject

@property (readonly, nonatomic) char isTrue;

+ (id)type;

- (char)destroy;
- (char)setToValue:(char)a0;
- (char)persist;
- (char)setTrue;
- (id)initWithDatastoreHandle:(id)a0 andName:(id)a1 shouldBeCreated:(char)a2;
- (char)negate;
- (char)setFalse;

@end
