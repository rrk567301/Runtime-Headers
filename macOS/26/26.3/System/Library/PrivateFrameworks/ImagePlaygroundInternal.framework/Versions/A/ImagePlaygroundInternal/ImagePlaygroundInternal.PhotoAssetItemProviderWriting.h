@class NSArray;

@interface ImagePlaygroundInternal.PhotoAssetItemProviderWriting : NSObject <NSItemProviderWriting> {
    void /* unknown type, empty encoding */ asset;
}

@property (class, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

- (id)init;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
