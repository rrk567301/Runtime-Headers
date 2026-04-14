@class NSSet;

@interface SFModelTaskSet : NSObject {
    NSSet *_tasks;
}

+ (id)set;
+ (id)taskSetWithAssetPath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)tasks;
- (id)initWithTasks:(id)a0;
- (BOOL)containsTask:(unsigned long long)a0;
- (BOOL)supportsAssistant;

@end
