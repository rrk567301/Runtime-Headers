@class PHAsset, SFShowPhotosOneUpViewCommand, SearchUICommandHandler;
@protocol NSPasteboardWriting;

@interface SearchUIShowPhotosOneUpViewHandler : SearchUICommandHandler

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) id<NSPasteboardWriting> pasteboardItem;
@property (retain, nonatomic) SFShowPhotosOneUpViewCommand *oneUpCommand;
@property (retain, nonatomic) SearchUICommandHandler *openPunchoutHandler;

+ (id)matchedPersonLocalIdentifiersForCommand:(id)a0;
+ (id)matchedSceneIdentifiersForCommand:(id)a0 andType:(int)a1;

- (id)url;
- (unsigned long long)destination;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (id)additionalPreviewActionCommandHandlers;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (id)destinationPunchout;
- (id)filePromiseProvider;
- (id)initWithCommand:(id)a0 rowModel:(id)a1 button:(id)a2 sectionModel:(id)a3 environment:(id)a4;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (id)previewItem;
- (id)searchContextFor:(id)a0;
- (BOOL)supportsOpen;
- (BOOL)supportsShare;

@end
