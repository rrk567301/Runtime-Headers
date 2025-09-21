@class TUConversationManager, TUNeighborhoodActivityConduit, NSString, NSHashTable, AVAudioSession, NSObject;
@protocol OS_dispatch_queue;

@interface MRExpanseManager : NSObject <TUConversationManagerDelegate>

@property (class, readonly, nonatomic) MRExpanseManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) TUConversationManager *conversationManager;
@property (readonly, nonatomic) TUNeighborhoodActivityConduit *conduit;
@property (retain, nonatomic) AVAudioSession *auxiliaryPlaybackAudioSession;
@property (readonly, nonatomic) char expanseSessionActive;
@property (readonly, nonatomic) char expanseSessionHasActiveActivity;
@property (readonly, nonatomic) char expanseSessionHasRemoteActivity;
@property (readonly, nonatomic) char expanseSessionHasScreenSharingActivity;
@property (readonly, nonatomic) char expanseHandoffSupported;
@property (readonly, nonatomic) NSString *activeTelevisionRouteID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithQueue:(id)a0;
- (char)activeActivityExistsForBundle:(id)a0;
- (id)activeConversation;
- (void)addTelevisionWithRouteIdentifierToSession:(id)a0 completion:(id /* block */)a1;
- (char)deviceIsActiveTelevision:(id)a0;
- (char)errorIsTelevisionCapabilitiesError:(id)a0;
- (void)removeTelevisionWithRouteIdentifierFromSession:(id)a0 completion:(id /* block */)a1;

@end
