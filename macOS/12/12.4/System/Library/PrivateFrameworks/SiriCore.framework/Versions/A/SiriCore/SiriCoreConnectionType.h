@interface SiriCoreConnectionType : NSObject {
    long long _technology;
}

- (id)description;
- (long long)technology;
- (id)initWithTechnology:(long long)a0;
- (BOOL)isWWAN;
- (BOOL)isEdge;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (unsigned long long)aggregatorConnectionType;

@end
