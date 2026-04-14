@interface PXConcatenatingAssetsDataSourceManager : PXAssetsDataSourceManager <PXAssetsDataSourceManagerObserver> {
    void /* unknown type, empty encoding */ dataSourceManagers;
}

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)initWithDataSourceManagers:(id)a0;

@end
