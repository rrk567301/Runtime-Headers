@class NSArray;

@interface PPScoreInterpreterBytecode : NSObject {
    struct unique_ptr<std::vector<PPSubscoreIdentifier>, std::default_delete<std::vector<PPSubscoreIdentifier>>> { struct { void *__ptr_; } ; } _subscoreComputeOrder;
    NSArray *_bytecodeDataBySubscoreTypeAndIndex;
    NSArray *_bytecodeRetainedObjectSlots;
    struct unique_ptr<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>, std::default_delete<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>>> { struct { void *__ptr_; } ; } _subscoreDependencies;
}

@property (readonly, nonatomic) struct __CFBitVector { } *scalarScoreInputsNeeded;
@property (readonly, nonatomic) struct __CFBitVector { } *arrayScoreInputsNeeded;
@property (readonly, nonatomic) struct __CFBitVector { } *objectScoreInputsNeeded;

+ (id)bytecodeFromAsset:(id)a0;
+ (id)scoreInterpreterParseRootFromAsset:(id)a0 scalarSubscoreCount:(unsigned long long *)a1 arraySubscoreCount:(unsigned long long *)a2 objectSubscoreCount:(unsigned long long *)a3;
+ (id)bytecodeFromFactorName:(id)a0 namespaceName:(id)a1;

- (void).cxx_destruct;
- (id)initWithParseRoot:(id)a0 scalarSubscoreCount:(unsigned long long)a1 arraySubscoreCount:(unsigned long long)a2 objectSubscoreCount:(unsigned long long)a3;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;

@end
