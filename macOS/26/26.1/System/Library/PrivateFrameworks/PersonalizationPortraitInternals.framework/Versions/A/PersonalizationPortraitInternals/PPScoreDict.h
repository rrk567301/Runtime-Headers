@class NSSet, PPBaseScoreInputSet, NSMutableArray;

@interface PPScoreDict : NSObject <MLFeatureProvider> {
    PPBaseScoreInputSet *_scoreInputSet;
    struct unique_ptr<std::vector<float>, std::default_delete<std::vector<float>>> { void *__ptr_; } _scalarValueStorage;
    struct unique_ptr<std::vector<std::shared_ptr<std::vector<float>>>, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> { void *__ptr_; } _arrayValueStorage;
    NSMutableArray *_objectStorage;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (float)scalarValueForIndex:(unsigned long long)a0;
- (void)setArrayValue:(id)a0 forIndex:(unsigned long long)a1;
- (unsigned long long)objectCount;
- (id)initWithScoreInputSet:(id)a0;
- (id)arrayValueDictionary;
- (id).cxx_construct;
- (id)scalarValueDictionary;
- (id)description;
- (struct shared_ptr<std::vector<float>> { void *x0; struct __shared_weak_count *x1; })arraySharedPtrForIndex:(unsigned long long)a0;
- (id)initWithScalarValueCount:(unsigned long long)a0 arrayValueCount:(unsigned long long)a1 objectCount:(unsigned long long)a2;
- (void)setArraySharedPtr:(struct shared_ptr<std::vector<float>> { void *x0; struct __shared_weak_count *x1; })a0 forIndex:(unsigned long long)a1;
- (void)setScalarValue:(float)a0 forIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)objectDictionary;
- (unsigned long long)scalarValueCount;
- (void)setObject:(id)a0 forIndex:(unsigned long long)a1;
- (void)setArrayStorage:(void *)a0 forIndex:(unsigned long long)a1;
- (unsigned long long)arrayValueCount;
- (id)arrayValueForIndex:(unsigned long long)a0;
- (id)init;
- (id)objectForIndex:(unsigned long long)a0;

@end
