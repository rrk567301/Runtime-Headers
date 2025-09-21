@class PXSectionedDataSourceManager, NSString, PXSectionedDataSource, NSArray;
@protocol PXDeferrableDataSourceManagerDelegate;

@interface PXDeferrableDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver> {
    char _hasInitialDataSource;
    char _clientIsHandlingDataSourceTransition;
    PXSectionedDataSource *_pendingDataSource;
    NSArray *_pendingDataSourceChangeDetails;
}

@property (retain, nonatomic) PXSectionedDataSourceManager *underlyingDataSourceManager;
@property (weak, nonatomic) id<PXDeferrableDataSourceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)createInitialDataSource;
- (id)initWithDataSourceManager:(id)a0;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (id)changeDetailsFromDataSource:(id)a0 toDataSource:(id)a1;
- (void)setDataSource:(id)a0 changeDetailsArray:(id)a1;
- (char)_canAttemptDataSourceChanges;
- (void)_finishTransitionToDataSource:(id)a0 changeDetailsArray:(id)a1;
- (void)_internal_setDataSource:(id)a0 changeDetailsArray:(id)a1;
- (void)_setPendingDataSource:(id)a0 changeDetailsArray:(id)a1;
- (void)resumeDataSourceChanges;

@end
