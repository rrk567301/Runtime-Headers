@class NSString, PHPhotosHighlight, PHObjectPlaceholder;

@interface PXRenameHighlightAction : PXPhotosAction

@property (readonly, nonatomic) PHPhotosHighlight *originalHighlight;
@property (readonly, copy, nonatomic) NSString *redoVerboseSmartDescription;
@property (readonly, copy, nonatomic) NSString *undoVerboseSmartDescription;
@property (retain, nonatomic) PHObjectPlaceholder *adaptiveHighlightPlaceholder;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithHighlight:(id)a0 verboseSmartDescription:(id)a1;

@end
