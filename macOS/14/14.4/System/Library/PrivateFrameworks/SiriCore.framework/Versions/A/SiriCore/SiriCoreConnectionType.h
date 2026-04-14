@interface SiriCoreConnectionType : NSObject {
    long long _technology;
}

- (id)description;
- (long long)technology;
- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (id)initWithTechnology:(long long)a0;
- (BOOL)isEdge;
- (BOOL)isWWAN;

@end
