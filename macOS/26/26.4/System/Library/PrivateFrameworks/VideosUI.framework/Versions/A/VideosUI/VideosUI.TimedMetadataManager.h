@interface VideosUI.TimedMetadataManager : NSObject <VUITimedMetadataManager> {
    void /* unknown type, empty encoding */ playbackInfos;
    void /* unknown type, empty encoding */ logger;
}

- (void).cxx_destruct;
- (id)init;
- (void)addObserverForPlayer:(id)a0;
- (void)removeObserverForPlayer:(id)a0;

@end
