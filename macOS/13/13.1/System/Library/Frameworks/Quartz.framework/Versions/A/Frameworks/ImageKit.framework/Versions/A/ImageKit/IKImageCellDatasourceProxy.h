@class NSString;

@interface IKImageCellDatasourceProxy : NSObject <IKImageProxy> {
    id _proxySource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)thumbnailWithSize:(double)a0 antialiased:(BOOL)a1 quality:(int)a2;
- (BOOL)isVectorial;
- (BOOL)requiresQuicklook;
- (int)proxyDataFormat;
- (id)proxyData;
- (id)proxyImage;
- (id)proxyReferenceInstance;
- (struct CGSize { double x0; double x1; })proxySize;
- (BOOL)supportConcurrentLoading;
- (id)proxySource;
- (void)setProxySource:(id)a0;
- (id)_datasourceImageRepresentationType;
- (id)_datasourceImageRepresentation:(BOOL)a0;
- (id)copyQuicklookOptions;
- (id)copyQuicklookURL;

@end
