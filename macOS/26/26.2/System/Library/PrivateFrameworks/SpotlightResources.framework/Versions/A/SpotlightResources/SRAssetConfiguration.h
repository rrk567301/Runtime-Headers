@class NSMutableDictionary, NSMutableSet;

@interface SRAssetConfiguration : NSObject {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_contentTypeMap;
    NSMutableDictionary *_clientMap;
    NSMutableDictionary *_deliveryTypeMap;
    NSMutableSet *_deliveryTypes;
}

+ (id)configuration;

- (void)clear;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;
- (id)assetTypes;
- (id)contentTypesForClient:(id)a0;
- (void)setProperties:(id)a0 client:(id)a1;

@end
