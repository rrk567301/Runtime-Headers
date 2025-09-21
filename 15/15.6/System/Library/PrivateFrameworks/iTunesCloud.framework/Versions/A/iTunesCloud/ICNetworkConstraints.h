@class NSMutableDictionary;

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying> {
    char _dataAllowedFallbackValue;
    char _cellularDataAllowedFallbackValue;
    char _wiFiDataAllowedFallbackValue;
    NSMutableDictionary *_networkTypeToDataAllowed;
    NSMutableDictionary *_networkTypeToSizeLimit;
}

+ (id)constraintsForSystemApplicationType:(long long)a0;
+ (id)mediaTypeNetworkConstraintsFromURLBag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)sizeLimitForNetworkType:(long long)a0;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;
- (char)shouldAllowDataForCellularNetworkTypes;
- (char)shouldAllowDataForNetworkType:(long long)a0;
- (char)shouldAllowDataForWiFiNetworkTypes;

@end
