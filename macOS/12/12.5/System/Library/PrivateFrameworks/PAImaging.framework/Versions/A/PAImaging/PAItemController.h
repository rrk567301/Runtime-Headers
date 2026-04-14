@class PHAsset, PAItem, PAEditSupport, PHContentEditingInput, PHAdjustmentData, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PAItemController : NSObject {
    PAItem *_item;
    unsigned long long _pendingEdits;
    BOOL _saveTrimAsNewVideo;
    NSObject<OS_dispatch_group> *_editGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    PHContentEditingInput *_originalContentEditingInput;
    PHContentEditingInput *_currentContentEditingInput;
    unsigned long long _currentContentEditingInputRequestID;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *editQueue;
@property (retain) PHContentEditingInput *assetContentEditingInput;
@property (retain) PHAdjustmentData *assetAdjustmentData;
@property (readonly, nonatomic) PAItem *item;
@property (readonly) PHAsset *asset;
@property (copy, nonatomic) id /* block */ saveTrimAsNewVideoHandler;
@property (retain, nonatomic) PAEditSupport *editSupport;
@property (retain) PHContentEditingInput *currentContentEditingInput;
@property (readonly, getter=isAvailableForEditing) BOOL availableForEditing;

+ (Class)itemClass;
+ (Class)itemControllerClassForAsset:(id)a0;
+ (id)itemControllerForAsset:(id)a0;
+ (id)existingItemControllerForAsset:(id)a0;

- (void).cxx_destruct;
- (BOOL)discardEditing;
- (BOOL)isEditing;
- (id)_initWithItem:(id)a0;
- (BOOL)_isEditing;
- (id)initWithAsset:(id)a0;
- (BOOL)beginEditing:(id *)a0;
- (void)assetDidChange:(id)a0;
- (void)resetEditingWithContentEditingInput:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_setCurrentContentEditingInput:(id)a0;
- (id)compositionIfEditing;
- (long long)_shouldCommitStatus;
- (void)beginEditingWithContentEditingInput:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)didEndEditing:(BOOL)a0 discard:(BOOL)a1;
- (void)beginEditing:(id)a0 completion:(id /* block */)a1;
- (void)_beginEditing:(id)a0 completion:(id /* block */)a1;
- (void)_didResetEditing;
- (void)commitEditingToAsset:(id)a0 contentEditingInput:(id)a1 saveTrimAsNewVideo:(BOOL)a2 queue:(id)a3 completion:(id /* block */)a4;
- (id)_newItemForAsset:(id)a0;
- (Class)_itemClass;
- (id)_currentContentEditingInput;
- (void)_internalSetCurrentContentEditingInput:(id)a0;
- (void)commitEditing:(id)a0 saveTrimAsNewVideo:(BOOL)a1 completion:(id /* block */)a2;
- (void)_endEditing:(BOOL)a0 discard:(BOOL)a1;
- (void)flushEditing:(id)a0 completion:(id /* block */)a1;
- (void)_resetEditing:(id)a0 completion:(id /* block */)a1;
- (void)_resetEditing;
- (void)resetEditing:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldUseDeferredRender;
- (id)_originalContentEditingInput;
- (void)originalContentEditingInput:(id)a0 completion:(id /* block */)a1;
- (void)beginEditingMainThread:(id /* block */)a0;
- (void)whenContentEditingInputReady:(id)a0 handler:(id /* block */)a1;
- (void)cancelBeginEditing;
- (BOOL)commitEditing:(id *)a0;
- (void)commitEditingMainThread:(id /* block */)a0;
- (BOOL)flushEditing:(id *)a0;
- (void)flushEditingMainThread:(id /* block */)a0;
- (void)resetEditingMainThread:(id /* block */)a0;
- (BOOL)hasUncommitedEditChanges;

@end
