@class SNConnectionTypeInternal;

@interface SNConnectionType : NSObject

@property (retain, nonatomic) SNConnectionTypeInternal *underlyingConnectionType;

- (id)description;
- (long long)technology;
- (void).cxx_destruct;
- (id)initWithTechnology:(long long)a0;
- (BOOL)isEdge;
- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (BOOL)isWWAN;
- (id)technologyDescription;

@end
