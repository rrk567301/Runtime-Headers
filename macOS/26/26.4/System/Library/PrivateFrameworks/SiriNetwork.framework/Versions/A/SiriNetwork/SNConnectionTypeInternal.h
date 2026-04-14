@interface SNConnectionTypeInternal : NSObject {
    void /* unknown type, empty encoding */ connectionType;
}

- (id)init:(long long)a0;
- (id)init;
- (BOOL)isEdge;
- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (BOOL)isWWAN;
- (long long)connectionTypeRawValue;
- (id)connectionTypeStringRawValue;

@end
