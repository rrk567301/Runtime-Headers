@class NSArray, NSMutableDictionary, IMPowerAssertion, NSDate, NSMutableArray;

@interface IMAVCallManager : NSObject {
    IMPowerAssertion *_powerAssertion;
    NSMutableArray *_chatArray;
    NSMutableArray *_acChatProxyArray;
    NSMutableArray *_avChatProxyArray;
    NSMutableDictionary *_guidToACChatProxyMap;
    NSMutableDictionary *_guidToAVChatProxyMap;
    NSDate *_lastCallStateChange;
    int _avToken;
    int _acToken;
    unsigned int _avCallState;
    unsigned int _acCallState;
    unsigned int _globalCallState;
}

@property (readonly, nonatomic) NSArray *_FTCalls;
@property (readonly, nonatomic) unsigned int callState;
@property (readonly, nonatomic) char hasActiveCall;
@property (readonly, nonatomic) NSArray *calls;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_mutableFTCalls;
- (id)_activeAudioCall;
- (id)_activeFaceTimeCall;
- (void)_addACChatProxy:(id)a0;
- (void)_addAVChatProxy:(id)a0;
- (void)_addIMAVChatToChatList:(id)a0;
- (unsigned int)_callState;
- (unsigned int)_callStateForType:(unsigned int)a0;
- (id)_calls;
- (id)_copyMutableFTCalls;
- (char)_hasActiveAudioCall;
- (char)_hasActiveFaceTimeCall;
- (id)_nonRetainingChatList;
- (void)_postStateChangeIfNecessary;
- (void)_postStateChangeNamed:(id)a0 fromState:(unsigned int)a1 toState:(unsigned int)a2 postType:(char)a3 type:(unsigned int)a4;
- (void)_removeIMAVChatFromChatList:(id)a0;
- (void)_sendProxyUpdate;
- (void)_setACCallState:(unsigned int)a0;
- (void)_setACCallState:(unsigned int)a0 quietly:(char)a1;
- (void)_setAVCallState:(unsigned int)a0;
- (void)_setAVCallState:(unsigned int)a0 quietly:(char)a1;
- (void)_updateACCallState;
- (void)_updateACChatProxyWithInfo:(id)a0;
- (void)_updateAVCallState;
- (void)_updateAVChatProxyWithInfo:(id)a0;
- (void)_updateOverallChatState;

@end
