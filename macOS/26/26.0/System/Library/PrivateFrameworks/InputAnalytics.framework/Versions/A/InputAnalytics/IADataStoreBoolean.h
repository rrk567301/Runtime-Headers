@interface IADataStoreBoolean : IADataStoreObject

@property (readonly, nonatomic) BOOL isTrue;

+ (id)type;

- (BOOL)persist;
- (BOOL)destroy;
- (BOOL)setToValue:(BOOL)a0;
- (BOOL)setTrue;
- (id)initWithDatastoreHandle:(id)a0 andName:(id)a1 shouldBeCreated:(BOOL)a2;
- (BOOL)negate;
- (BOOL)setFalse;

@end
