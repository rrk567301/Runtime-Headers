@class NSSet, PPBaseScoreInputSet, NSMutableArray;

@interface PPScoreDict : NSObject <MLFeatureProvider> {
    PPBaseScoreInputSet *_scoreInputSet;
    struct unique_ptr<std::vector<float>, std::default_delete<std::vector<float>>> { void *__ptr_; } _scalarValueStorage;
    struct unique_ptr<std::vector<std::shared_ptr<std::vector<float>>>, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> { void *__ptr_; } _arrayValueStorage;
    NSMutableArray *_objectStorage;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)arrayValueDictionary;
- (unsigned long long)arrayValueCount;
- (id)objectDictionary;
- (id)arrayValueForIndex:(unsigned long long)a0;
- (void)setArrayValue:(id)a0 forIndex:(unsigned long long)a1;
- (id)init;
- (struct shared_ptr<std::vector<float>> { void *x0; struct __shared_weak_count *x1; })arraySharedPtrForIndex:(unsigned long long)a0;
- (void)setObject:(id)a0 forIndex:(unsigned long long)a1;
- (id)description;
- (float)scalarValueForIndex:(unsigned long long)a0;
- (id)scalarValueDictionary;
- (id)initWithScoreInputSet:(id)a0;
- (id).cxx_construct;
- (void)setArraySharedPtr:(struct shared_ptr<std::vector<float>> { void *x0; struct __shared_weak_count *x1; })a0 forIndex:(unsigned long long)a1;
- (unsigned long long)scalarValueCount;
- (unsigned long long)objectCount;
- (void)setArrayStorage:(void *)a0 forIndex:(unsigned long long)a1;
- (id)initWithScalarValueCount:(unsigned long long)a0 arrayValueCount:(unsigned long long)a1 objectCount:(unsigned long long)a2;
- (void)setScalarValue:(float)a0 forIndex:(unsigned long long)a1;
- (id)objectForIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
