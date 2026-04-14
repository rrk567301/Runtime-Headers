@class NSObject, NSArray, FINode;

@interface DSProvidersObserver : NSObject {
    struct TNodePtr { FINode *fFINode; } fParentNode;
    NSObject *_token;
    NSArray *_providers;
    struct unique_ptr<AutoSignpostInterval_FPProvider_Gathering, std::default_delete<AutoSignpostInterval_FPProvider_Gathering>> { struct { struct AutoSignpostInterval_FPProvider_Gathering *__ptr_; } ; } _gatheringSignpost;
}

@property (readonly) BOOL populated;

- (void)stopObserving;
- (void)startObserving;
- (void).cxx_destruct;
- (id)providers;
- (void)setProviders:(id)a0;
- (id).cxx_construct;
- (id)providersByAddingProviderIfNeeded:(id)a0;
- (void)receivedChanges:(id)a0;

@end
