@class _PXMomentShareMockMomentShare;
@protocol PXDisplayMomentShare;

@interface PXMomentShareStatusMock : PXMomentShareStatus {
    id<PXDisplayMomentShare> _originalMomentShare;
    _PXMomentShareMockMomentShare *_mockMomentShare;
}

@property (class, readonly) BOOL shouldUseMockStatus;

- (id)owner;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMomentShare:(id)a0;
- (id)_actionManager;
- (id)_createStatusProvider;

@end
