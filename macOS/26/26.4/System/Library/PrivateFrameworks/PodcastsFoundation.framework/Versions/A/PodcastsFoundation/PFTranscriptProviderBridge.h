@interface PFTranscriptProviderBridge : NSObject {
    void /* unknown type, empty encoding */ wrappedProvider;
    void /* unknown type, empty encoding */ managedObjectContext;
    void /* unknown type, empty encoding */ workQueue;
}

@property (class, nonatomic, readonly) PFTranscriptProviderBridge *shared;

- (void).cxx_destruct;
- (id)init;
- (void)updateTTMLIDFrom:(id)a0 toNewID:(id)a1 hasDownloadedContent:(BOOL)a2 forEpisodeAdamID:(long long)a3;
- (void)invalidateTranscriptAssetForAdamID:(long long)a0;

@end
