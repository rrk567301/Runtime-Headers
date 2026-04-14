@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BWPipelineStage : NSObject {
    NSObject<OS_dispatch_group> *_executionGroup;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
    _Atomic unsigned long long _activeInput;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int priority;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL stillImagePipelineStage;
@property (readonly) unsigned long long activeInput;

+ (void)initialize;
+ (id)pipelineStageWithName:(id)a0 priority:(unsigned int)a1 workgroup:(id)a2 discardsLateSampleData:(BOOL)a3;
+ (id)pipelineStageWithName:(id)a0 priority:(unsigned int)a1 workgroup:(id)a2;
+ (id)pipelineStageWithName:(id)a0 priority:(unsigned int)a1 discardsLateSampleData:(BOOL)a2;
+ (id)pipelineStageWithName:(id)a0 priority:(unsigned int)a1;

- (void)sendMessage:(id)a0 toInput:(id)a1;
- (id)description;
- (void)sendMessagesToInput:(id)a0 messageProvider:(id /* block */)a1;
- (void)dealloc;

@end
