@interface SiriCoreConnectionType : NSObject {
    long long _technology;
}

- (id)description;
- (id)initWithTechnology:(long long)a0;
- (long long)technology;
- (unsigned long long)aggregatorConnectionType;
- (char)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (char)isEdge;
- (char)isWWAN;

@end
