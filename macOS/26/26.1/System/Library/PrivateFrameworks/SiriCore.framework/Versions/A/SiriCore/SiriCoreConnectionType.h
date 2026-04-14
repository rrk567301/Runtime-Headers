@interface SiriCoreConnectionType : NSObject {
    long long _technology;
}

- (long long)technology;
- (id)description;
- (id)initWithTechnology:(long long)a0;
- (BOOL)isEdge;
- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (BOOL)isWWAN;

@end
