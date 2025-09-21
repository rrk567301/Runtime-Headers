@class BGSystemTask;

@interface BRCBGSystemTask : NSObject {
    BGSystemTask *_task;
}

- (id)taskIdentifier;
- (void).cxx_destruct;
- (void)completeTask;
- (BOOL)expireTask;
- (id)initWithBGSystemTask:(id)a0;
- (BOOL)isTaskExpired;

@end
