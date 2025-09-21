@class PXSectionedDataSource, PXSectionedDataSourceManager, NSString, PXDataSectionEnablementForwarder;

@interface PXNavigationListDataSourceBasedDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXDataSectionManagerEnabling>

@property (retain, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic, getter=isDataSourceEmpty) char dataSourceEmpty;
@property (readonly, nonatomic, getter=isDataSectionVisible) char dataSectionVisible;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property (nonatomic, getter=isHiddenWhenEmpty) char hiddenWhenEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) char enabled;
@property (retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithDataSourceManager:(id)a0;
- (void)_handleDataSourceChange;
- (void)_updateVisibilityViaDataSectionIfNecessary;
- (char)allowsEmptyDataSection;
- (id)createDataSection;
- (id)dataSectionFromDataSource:(id)a0;
- (id)initWithChildDataSectionManagers:(id)a0;

@end
