@interface SNConnectionTypeInternal : NSObject {
    void /* unknown type, empty encoding */ connectionType;
}

- (id)init;
- (id)init:(long long)a0;
- (BOOL)canUseWiFiDirectly;
- (BOOL)isEdge;
- (BOOL)isWWAN;
- (long long)connectionTypeRawValue;
- (id)connectionTypeStringRawValue;

@end
