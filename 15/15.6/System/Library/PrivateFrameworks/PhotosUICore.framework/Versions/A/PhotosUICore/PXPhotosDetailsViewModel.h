@class PXSectionedSelectionManager, NSSet, NSString;

@interface PXPhotosDetailsViewModel : PXObservable <PXMutablePhotosDetailsViewModel>

@property (readonly, nonatomic, getter=isSelecting) char selecting;
@property (readonly, nonatomic) char supportsSelection;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) char supportsFaceMode;
@property (readonly, nonatomic, getter=isFaceModeEnabled) char faceModeEnabled;
@property (readonly, nonatomic) NSSet *disabledActionTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setSupportsSelection:(char)a0;
- (void)setSelecting:(char)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setSelectionManager:(id)a0;
- (id)mutableChangeObject;
- (void)setDisabledActionTypes:(id)a0;
- (void)setFaceModeEnabled:(char)a0;
- (void)setSupportsFaceMode:(char)a0;

@end
