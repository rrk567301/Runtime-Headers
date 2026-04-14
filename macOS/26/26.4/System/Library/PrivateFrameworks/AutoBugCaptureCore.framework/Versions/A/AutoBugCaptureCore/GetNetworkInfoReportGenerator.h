@interface GetNetworkInfoReportGenerator : NetworkDiagnosticsReportGenerator

- (void)setDefaults;
- (void)setGNISensitiveOption:(BOOL)a0;
- (void)setGNINDFInfoOption:(BOOL)a0;
- (id)initWithQueue:(id)a0;
- (void)setGNISysConfigOption:(BOOL)a0;

@end
