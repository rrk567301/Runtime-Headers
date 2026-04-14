@class NSBundle, NSMutableArray;

@interface CDMCATIProtoService : CDMDAGBaseService {
    NSBundle *_catiBundle;
    NSMutableArray *_childServices;
    long long _assetVersion;
}

+ (BOOL)isEnabled;
+ (id)getCDMServiceAssetConfig;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (long long)getServiceState;
- (id)getChildServices;
- (id)handleRequestCommandTypeNames;
- (id)setupErrorResponse:(id)a0 serviceState:(long long)a1;

@end
