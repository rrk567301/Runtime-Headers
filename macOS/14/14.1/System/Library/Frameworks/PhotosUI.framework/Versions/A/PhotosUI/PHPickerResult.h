@class NSString, _PHPickerResultMetadata, NSItemProvider;

@interface PHPickerResult : NSObject

@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) long long _sourceType;
@property (readonly, nonatomic) _PHPickerResultMetadata *_metadata;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSString *assetIdentifier;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithItemProvider:(id)a0 assetIdentifier:(id)a1;
- (id)_initWithItemProvider:(id)a0 itemIdentifier:(id)a1 sourceType:(long long)a2;
- (id)_initWithItemProvider:(id)a0 itemIdentifier:(id)a1 sourceType:(long long)a2 userInfo:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preferredContentsRectForTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)_requestThumbnailImageURLForPreferredSize:(long long)a0 resultHandler:(id /* block */)a1;

@end
