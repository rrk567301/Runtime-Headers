@interface GetNetworkInfoReportGenerator : NetworkDiagnosticsReportGenerator

- (id)initWithQueue:(id)a0;
- (void)setGNINDFInfoOption:(BOOL)a0;
- (void)setGNISensitiveOption:(BOOL)a0;
- (void)setDefaults;
- (void)setGNISysConfigOption:(BOOL)a0;

@end
