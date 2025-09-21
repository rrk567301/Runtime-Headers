@class NSString, NSSet, _GCSystemButtonServiceInternal;

@interface GCSystemButtonService : NSObject {
    _GCSystemButtonServiceInternal *_impl;
}

@property (readonly, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sfSymbolName;
@property (readonly, copy) NSSet *respondingProcessBundleIdentifiers;

+ (id)sharedInstance;

- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)beginConsumingPressesWithReason:(id)a0 consumer:(id)a1 priority:(long long)a2;

@end
