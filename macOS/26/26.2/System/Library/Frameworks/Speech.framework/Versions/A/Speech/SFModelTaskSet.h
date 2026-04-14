@class NSSet;

@interface SFModelTaskSet : NSObject {
    NSSet *_tasks;
}

+ (id)set;
+ (id)modelInfoVersionWithAssetPath:(id)a0 taskHint:(long long)a1;
+ (id)modelInfoWithAssetPath:(id)a0 taskHint:(long long)a1;
+ (id)taskSetWithAssetPath:(id)a0;

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)tasks;
- (id)init;
- (id)initWithTasks:(id)a0;
- (BOOL)containsTask:(unsigned long long)a0;
- (BOOL)supportsAssistant;

@end
