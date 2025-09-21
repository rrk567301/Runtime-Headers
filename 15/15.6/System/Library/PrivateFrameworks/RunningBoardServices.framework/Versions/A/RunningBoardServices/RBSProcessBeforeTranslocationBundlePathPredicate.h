@class NSString;

@interface RBSProcessBeforeTranslocationBundlePathPredicate : RBSProcessStringPredicate {
    NSString *_beforeTranslocationBundlePath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (char)matchesProcess:(id)a0;
- (id)beforeTranslocationBundlePath;

@end
