@class NSMutableDictionary, LNMetadataProvider;

@interface WFSharedLinkMetadataProvider : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMutableDictionary *lock_cachedExamplePhrases;
@property (readonly, nonatomic) LNMetadataProvider *metadataProvider;

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (id)examplePhrasesForBundleIdentifier:(id)a0 useCache:(BOOL)a1 error:(id *)a2;
- (void)handleLinkMetadataDidChangeNotification:(id)a0;

@end
