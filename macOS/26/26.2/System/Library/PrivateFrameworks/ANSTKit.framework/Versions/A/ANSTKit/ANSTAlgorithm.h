@interface ANSTAlgorithm : NSObject

@property (readonly, nonatomic) unsigned long long version;

+ (id)new;
+ (unsigned long long)_version;
+ (Class)_concreteClassOfVersion:(unsigned long long)a0;

- (BOOL)prepareWithError:(id *)a0;
- (BOOL)resetWithError:(id *)a0;
- (id)init;
- (id)initWithConfiguration:(id)a0;

@end
