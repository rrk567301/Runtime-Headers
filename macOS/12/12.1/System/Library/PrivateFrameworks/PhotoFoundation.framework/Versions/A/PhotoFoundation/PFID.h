@interface PFID : NSObject

@property _Atomic long long identifier;

+ (void)initialize;
+ (id)PFID;

- (id)init;
- (id)initWithIntegerValue:(long long)a0;
- (long long)nextID;
- (void)setNextID:(long long)a0;
- (long long)currentID;

@end
