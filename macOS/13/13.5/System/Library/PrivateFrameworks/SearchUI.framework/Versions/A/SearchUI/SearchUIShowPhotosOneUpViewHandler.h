@class PHAsset, NSPasteboardItem;

@interface SearchUIShowPhotosOneUpViewHandler : SearchUICommandHandler

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSPasteboardItem *pasteboardItem;

- (void).cxx_destruct;
- (unsigned long long)destination;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (id)filePromiseProvider;
- (id)initWithCommand:(id)a0 rowModel:(id)a1 button:(id)a2 environment:(id)a3;

@end
