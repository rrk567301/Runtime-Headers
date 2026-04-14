@class PXSharedLibraryParticipantDataSource;

@interface PXSharedLibraryParticipantDataSourceManager : PXSectionedDataSourceManager <PXSharedLibraryMutableParticipantDataSourceManager>

@property (readonly, nonatomic) PXSharedLibraryParticipantDataSource *dataSource;

+ (id)aggregatedDataSourceWithParticipants:(id)a0;
+ (id)aggregatedDataSource;

- (void)addParticipants:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)createInitialDataSource;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)replaceDataSourceWithDataSource:(id)a0;
- (void)removeParticipantAtIndex:(unsigned long long)a0;
- (void)resumeChangeDelivery:(id)a0;

@end
