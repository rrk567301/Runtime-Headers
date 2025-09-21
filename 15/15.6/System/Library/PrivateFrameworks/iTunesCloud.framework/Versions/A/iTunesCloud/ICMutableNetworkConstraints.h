@interface ICMutableNetworkConstraints : ICNetworkConstraints

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setShouldAllowData:(char)a0 forNetworkType:(long long)a1;
- (void)setShouldAllowDataForAllNetworkTypes:(char)a0;
- (void)setShouldAllowDataForCellularNetworkTypes:(char)a0;
- (void)setShouldAllowDataForWiFiNetworkTypes:(char)a0;
- (void)setSizeLimit:(id)a0 forNetworkType:(long long)a1;

@end
