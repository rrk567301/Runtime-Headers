@class NSUUID, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface CCRapportSyncSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_transaction> *_transaction;
    id /* block */ _nextInteractionTimeout;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_activationReasons;
    NSMutableArray *_flags;
    NSMutableArray *_registeredInteractions;
    NSMutableArray *_runningInteractions;
    NSMutableArray *_completedInteractions;
    id /* block */ _interactionHandler;
    unsigned long long _interactionIndex;
    unsigned short _options;
}

@property (readonly, nonatomic) unsigned long long operationId;
@property (readonly, nonatomic) NSUUID *uuid;

- (void)cancel:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_addFlags:(unsigned char)a0 forInteractionType:(unsigned char)a1;
- (void)_cancelNextInteractionTimeout;
- (void)_completeSession:(id)a0;
- (BOOL)_hasFlags:(unsigned char)a0 forInteractionType:(unsigned char)a1;
- (BOOL)_isRunningInteractionType:(unsigned char)a0;
- (void)_runInteraction:(id)a0;
- (void)_runNextInteraction;
- (void)_setNextInteractionTimeout;
- (void)cancelInteractionType:(unsigned char)a0 withDevice:(id)a1 error:(id)a2;
- (id)initWithQueue:(id)a0 interactionHandler:(id /* block */)a1;
- (id)interactionOfType:(unsigned char)a0 withDevice:(id)a1;
- (void)registerSessionActivationReason:(unsigned char)a0 forInteractionType:(unsigned char)a1 withOptions:(unsigned short)a2 completionHandler:(id /* block */)a3;
- (void)submitInteractionType:(unsigned char)a0 withDevice:(id)a1;
- (void)submitInteractionType:(unsigned char)a0 withDevice:(id)a1 reason:(unsigned char)a2;
- (void)unblockInteractionType:(unsigned char)a0;

@end
