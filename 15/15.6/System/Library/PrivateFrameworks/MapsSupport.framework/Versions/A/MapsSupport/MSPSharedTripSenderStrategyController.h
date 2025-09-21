@class NSMutableDictionary, MSPSharedTripGroupSession, MSPSenderVirtualLiveStrategy, NSMutableArray, MSPSenderLiveStrategy;
@protocol MSPSenderMessageStrategyDelegate;

@interface MSPSharedTripSenderStrategyController : NSObject {
    MSPSharedTripGroupSession *_groupSession;
    id<MSPSenderMessageStrategyDelegate> _messageStrategyDelegate;
    NSMutableDictionary *_senderStrategiesByServiceName;
    MSPSenderLiveStrategy *_liveSender;
    NSMutableDictionary *_virtualSenderStrategiesByServiceName;
    MSPSenderVirtualLiveStrategy *_virtualLiveSender;
    NSMutableArray *_nestedVirtualReceiverEnablement;
}

+ (void)updateGroupSessionStorage:(id)a0 fromController:(id)a1;

- (void).cxx_destruct;
- (char)addParticipants:(id)a0 forServiceName:(id)a1;
- (void)restoreFromGroupSessionStorage:(id)a0;
- (id)_createMinimalSenderForServiceName:(id)a0;
- (id)_createMinimalSenderWithMapsClass:(Class)a0 messagesClass:(Class)a1 serviceName:(id)a2;
- (id)_currentLiveSender:(char)a0;
- (id)_currentMinimalSenderForServiceName:(id)a0 createIfNeeded:(char)a1;
- (id)_currentSendersByServiceName;
- (char)_enableVirtualReceivers;
- (void)_performBlockWithMinimalSenders:(id /* block */)a0;
- (void)_updateGroupSessionStorage:(id)a0;
- (char)addLiveParticipants:(id)a0;
- (id)initWithGroupSession:(id)a0 messageStrategyDelegate:(id)a1;
- (void)performWithAllMinimalSenders:(id /* block */)a0;
- (void)performWithVirtualSenders:(char)a0 block:(id /* block */)a1;
- (char)removeLiveParticipant:(id)a0;
- (void)removeLiveParticipants:(id)a0;
- (char)removeParticipant:(id)a0 forServiceName:(id)a1 reason:(unsigned long long)a2;
- (char)removeParticipant:(id)a0 reason:(unsigned long long)a1;
- (void)setState:(id)a0 forEvent:(unsigned long long)a1;

@end
