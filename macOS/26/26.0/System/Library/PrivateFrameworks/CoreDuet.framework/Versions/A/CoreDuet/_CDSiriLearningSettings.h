@class NSArray, NSMutableArray;

@interface _CDSiriLearningSettings : NSObject {
    BOOL _hasPrefsAccess;
    int _notifyToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_allLearningDisabledBundleIDs;
    NSMutableArray *_delegates;
}

@property (readonly, nonatomic) NSArray *allLearningDisabledBundleIDs;

+ (id)sharedInstance;

- (BOOL)isLearningDisabledForBundleID:(id)a0;
- (void)stopSanitizing;
- (void)startSanitizingKnowledgeStore:(id)a0;
- (void)startSanitizingInteractionStore:(id)a0;
- (void).cxx_destruct;

@end
