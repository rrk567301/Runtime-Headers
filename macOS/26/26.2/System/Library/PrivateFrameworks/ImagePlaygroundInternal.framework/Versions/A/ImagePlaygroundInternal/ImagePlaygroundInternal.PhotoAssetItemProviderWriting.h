@class NSArray;

@interface ImagePlaygroundInternal.PhotoAssetItemProviderWriting : NSObject <NSItemProviderWriting> {
    void /* unknown type, empty encoding */ asset;
}

@property (class, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)init;

@end
