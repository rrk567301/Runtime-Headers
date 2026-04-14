@class NSUUID, FSTaskDescription, NSProgress;

@interface FSModuleTask : NSObject

@property (copy) NSUUID *taskUUID;
@property (retain) FSTaskDescription *taskDescription;
@property (retain) NSProgress *taskProgress;
@property BOOL wasCanceled;

+ (id)taskWithID:(id)a0 description:(id)a1 progress:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithID:(id)a0 description:(id)a1 progress:(id)a2;

@end
