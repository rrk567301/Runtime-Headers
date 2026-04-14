@class NSSet, PPBaseScoreInputSet, NSMutableArray;

@interface PPScoreDict : NSObject <MLFeatureProvider> {
    PPBaseScoreInputSet *_scoreInputSet;
    struct unique_ptr<std::vector<float>, std::default_delete<std::vector<float>>> { struct { void *__ptr_; } ; } _scalarValueStorage;
    struct unique_ptr<std::vector<std::shared_ptr<std::vector<float>>>, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> { struct { void *__ptr_; } ; } _arrayValueStorage;
    NSMutableArray *_objectStorage;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithScalarValueCount:(unsigned long long)a0 arrayValueCount:(unsigned long long)a1 objectCount:(unsigned long long)a2;
- (id)objectDictionary;
- (id)arrayValueDictionary;
- (id)arrayValueForIndex:(unsigned long long)a0;
- (unsigned long long)objectCount;
- (id)featureValueForName:(id)a0;
- (void)setArrayValue:(id)a0 forIndex:(unsigned long long)a1;
- (void)setScalarValue:(float)a0 forIndex:(unsigned long long)a1;
- (id)initWithScoreInputSet:(id)a0;
- (void).cxx_destruct;
- (void)setArrayStorage:(void *)a0 forIndex:(unsigned long long)a1;
- (void)setObject:(id)a0 forIndex:(unsigned long long)a1;
- (struct shared_ptr<std::vector<float>> { void *x0; struct __shared_weak_count *x1; })arraySharedPtrForIndex:(unsigned long long)a0;
- (void)setArraySharedPtr:(struct shared_ptr<std::vector<float>> { void *x0; struct __shared_weak_count *x1; })a0 forIndex:(unsigned long long)a1;
- (id)init;
- (float)scalarValueForIndex:(unsigned long long)a0;
- (id)scalarValueDictionary;
- (id)objectForIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (id)description;
- (unsigned long long)scalarValueCount;
- (unsigned long long)arrayValueCount;

@end
