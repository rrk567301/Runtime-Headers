@interface GetNetworkInfoReportGenerator : NetworkDiagnosticsReportGenerator

- (id)initWithQueue:(id)a0;
- (void)setDefaults;
- (void)setGNINDFInfoOption:(char)a0;
- (void)setGNISensitiveOption:(char)a0;
- (void)setGNISysConfigOption:(char)a0;

@end
