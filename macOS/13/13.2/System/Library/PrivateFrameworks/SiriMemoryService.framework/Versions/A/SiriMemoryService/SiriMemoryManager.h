@class SiriMemoryManagerInternal;

@interface SiriMemoryManager : NSObject

@property (readonly, nonatomic) SiriMemoryManagerInternal *siriMemory;

- (id)init;
- (void).cxx_destruct;
- (void)createModules;

@end
