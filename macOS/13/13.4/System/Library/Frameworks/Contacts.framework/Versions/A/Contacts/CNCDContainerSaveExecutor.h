@class CNCDSaveContext;

@interface CNCDContainerSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;

- (void).cxx_destruct;
- (id)initWithSaveContext:(id)a0;
- (void)saveContainers;

@end
