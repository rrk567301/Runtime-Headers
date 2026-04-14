@class NSMutableDictionary, NSMutableSet;

@interface SRAssetConfiguration : NSObject {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_contentTypeMap;
    NSMutableDictionary *_clientMap;
    NSMutableDictionary *_deliveryTypeMap;
    NSMutableSet *_deliveryTypes;
    NSMutableDictionary *_localeMap;
    unsigned int _localesVersion;
}

+ (id)configuration;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)setLocales:(id)a0;
- (id)assetTypes;
- (id)contentTypesForClient:(id)a0;
- (BOOL)isValidLocale:(id)a0 deliveryType:(id)a1;
- (void)setProperties:(id)a0 client:(id)a1;
- (unsigned int)supportedLocalesVersion;

@end
