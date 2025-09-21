@interface SNConnectionTypeInternal : NSObject {
    void /* unknown type, empty encoding */ connectionType;
}

- (id)init;
- (id)init:(long long)a0;
- (unsigned long long)aggregatorConnectionType;
- (char)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (char)isEdge;
- (char)isWWAN;
- (long long)connectionTypeRawValue;
- (id)connectionTypeStringRawValue;

@end
