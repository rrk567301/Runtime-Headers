@interface IKImageCellTrackingViewDatasourceProxy : IKImageCellDatasourceProxy {
    id _viewIdentifier;
}

- (void)dealloc;
- (id)viewIdentifier;
- (void)setViewIdentifier:(id)a0;
- (id)_datasourceImageRepresentationType;
- (id)_datasourceImageRepresentation:(BOOL)a0;
- (id)copyQuicklookURL;

@end
