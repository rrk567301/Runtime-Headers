@class NSArray;

@interface DDTypeInhabitant : NSObject {
    unsigned long long _hash;
    NSArray *_names;
}

+ (id)emptyInhabitant;
+ (id)inhabitantWithName:(id)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithNames:(id)a0;
- (id)typeInhabitantByJoining:(id)a0;

@end
