@class NSString;

@interface RBSProcessBeforeTranslocationBundlePathPredicate : RBSProcessStringPredicate {
    NSString *_beforeTranslocationBundlePath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)beforeTranslocationBundlePath;
- (BOOL)matchesProcess:(id)a0;
- (void).cxx_destruct;

@end
