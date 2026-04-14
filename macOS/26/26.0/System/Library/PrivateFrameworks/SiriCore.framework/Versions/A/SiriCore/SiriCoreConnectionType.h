@interface SiriCoreConnectionType : NSObject {
    long long _technology;
}

- (id)description;
- (long long)technology;
- (id)initWithTechnology:(long long)a0;
- (BOOL)isEdge;
- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (BOOL)isWWAN;

@end
