@class SNConnectionTypeInternal;

@interface SNConnectionType : NSObject

@property (retain, nonatomic) SNConnectionTypeInternal *underlyingConnectionType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTechnology:(long long)a0;
- (long long)technology;
- (unsigned long long)aggregatorConnectionType;
- (char)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (char)isEdge;
- (char)isWWAN;
- (id)technologyDescription;

@end
