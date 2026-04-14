@class NSArray;

@interface DDTypeInhabitant : NSObject {
    unsigned long long _hash;
    NSArray *_names;
}

+ (id)inhabitantWithName:(id)a0;
+ (id)emptyInhabitant;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (long long)compare:(id)a0;
- (id)initWithNames:(id)a0;
- (id)typeInhabitantByJoining:(id)a0;

@end
