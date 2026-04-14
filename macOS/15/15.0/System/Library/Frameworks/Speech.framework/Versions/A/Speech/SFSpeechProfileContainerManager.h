@class NSMutableDictionary;

@interface SFSpeechProfileContainerManager : NSObject {
    NSMutableDictionary *_containerForPersona;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)containerForCurrentPersona;
- (id)containerForPersona:(id)a0;
- (void)releaseContainerForPersona:(id)a0;

@end
