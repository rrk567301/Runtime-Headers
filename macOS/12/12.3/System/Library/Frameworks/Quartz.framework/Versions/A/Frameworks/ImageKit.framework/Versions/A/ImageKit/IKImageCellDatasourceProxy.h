@class NSString;

@interface IKImageCellDatasourceProxy : NSObject <IKImageProxy> {
    id _proxySource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)proxyImage;
- (id)proxyReferenceInstance;
- (int)proxyDataFormat;
- (id)thumbnailWithSize:(double)a0 antialiased:(BOOL)a1 quality:(int)a2;
- (struct CGSize { double x0; double x1; })proxySize;
- (BOOL)isVectorial;
- (id)proxyData;
- (BOOL)supportConcurrentLoading;
- (BOOL)requiresQuicklook;
- (id)copyQuicklookOptions;
- (id)copyQuicklookURL;
- (id)proxySource;
- (void)setProxySource:(id)a0;
- (id)_datasourceImageRepresentationType;
- (id)_datasourceImageRepresentation:(BOOL)a0;

@end
