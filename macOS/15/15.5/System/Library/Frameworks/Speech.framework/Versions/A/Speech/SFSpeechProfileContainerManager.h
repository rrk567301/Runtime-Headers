@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SFSpeechProfileContainerManager : NSObject <SFSpeechProfileResourceMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_containerForPersona;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)personaForContainerRelativeURL:(id)a0;
- (id)containerForCurrentPersona;
- (id)containerForPersona:(id)a0;
- (void)releaseContainerForPersona:(id)a0;
- (void)resourceAvailableForPersona:(id)a0;
- (void)resourceUnavailableForPersona:(id)a0;

@end
