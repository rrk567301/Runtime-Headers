@class NSMutableSet;

@interface _AFSiriClientState : NSObject {
    NSMutableSet *_requestUUIDs;
}

@property (nonatomic) char hasActiveSession;
@property (nonatomic) char isListening;
@property (nonatomic) char isSpeaking;
@property (readonly, nonatomic) unsigned long long notifyState;

- (id)init;
- (void).cxx_destruct;
- (void)addRequestUUID:(id)a0;
- (void)removeRequestUUID:(id)a0;

@end
