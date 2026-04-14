@class PHAsset, NSPasteboardItem;

@interface SearchUIShowPhotosOneUpViewHandler : SearchUICommandHandler

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSPasteboardItem *pasteboardItem;

- (void).cxx_destruct;
- (id)writableTypesForPasteboard:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (unsigned long long)destination;
- (id)initWithCommand:(id)a0 rowModel:(id)a1 button:(id)a2 environment:(id)a3;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (id)filePromiseProvider;

@end
