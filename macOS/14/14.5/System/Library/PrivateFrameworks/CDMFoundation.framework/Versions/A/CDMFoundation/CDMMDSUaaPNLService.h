@interface CDMMDSUaaPNLService : CDMUaaPNLProtoService

+ (BOOL)isEnabled;
+ (id)getCDMServiceAssetConfig;

- (id)setup:(id)a0;
- (int)getOverrideNamespace;

@end
