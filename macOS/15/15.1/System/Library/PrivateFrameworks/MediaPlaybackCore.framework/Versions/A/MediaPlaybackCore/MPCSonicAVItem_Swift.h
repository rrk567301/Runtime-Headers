@class NSError, MPCSonicAVItemAsset;

@interface MPCSonicAVItem_Swift : NSObject {
    void /* unknown type, empty encoding */ objc;
    void /* unknown type, empty encoding */ _storage;
}

- (id)init;
- (void).cxx_destruct;
- (id)_contentID;
- (id)initWithItem:(id)a0 contentID:(id)a1 userIdentity:(id)a2;
- (void)renderWithCompletion:(void (^)(MPCSonicAVItemAsset *, NSError *))a0;

@end
