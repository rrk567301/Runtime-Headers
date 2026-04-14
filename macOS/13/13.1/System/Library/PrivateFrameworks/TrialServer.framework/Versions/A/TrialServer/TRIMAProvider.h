@interface TRIMAProvider : NSObject <TRIMAProviding>

- (id)installedAssetsMatchingFullAssetIds:(id)a0;
- (id)downloadAssets:(id)a0 attribution:(id)a1 aggregateProgress:(id)a2 group:(id)a3 completion:(id /* block */)a4;

@end
