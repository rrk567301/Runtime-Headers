@interface CHModelCatalog : NSObject {
    void /* unknown type, empty encoding */ logger;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)assetDeliveryReady;
- (id)getMetadata:(long long)a0 variant:(long long)a1;
- (id)getModelURL:(long long)a0;
- (id)getModelURL:(long long)a0 variant:(long long)a1;
- (id)getModelVersion:(long long)a0;
- (id)getModelVersion:(long long)a0 variant:(long long)a1;

@end
