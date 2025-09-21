@class NSDocumentRevisionsStackLayer, NSFileVersion, NSDocumentRevisionsPlaceholderView;

@interface NSDocumentRevisionsStackItem : NSObject {
    NSDocumentRevisionsPlaceholderView *_placeholderView;
}

@property (retain) NSFileVersion *version;
@property char hasLocalData;
@property (retain) NSDocumentRevisionsPlaceholderView *placeholderView;
@property (retain) NSDocumentRevisionsStackLayer *layer;
@property char hasValidSnapshot;
@property char hasWindowVisible;
@property char documentFailedToLoad;

+ (id)itemWithVersion:(id)a0;

- (void).cxx_destruct;
- (void)_setupLayerAsPlaceholder:(char)a0;
- (void)applyParameters:(id)a0;

@end
