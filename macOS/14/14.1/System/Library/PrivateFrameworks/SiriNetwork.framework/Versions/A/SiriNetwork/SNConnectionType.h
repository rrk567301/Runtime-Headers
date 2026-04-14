@class SNConnectionTypeInternal;

@interface SNConnectionType : NSObject

@property (retain, nonatomic) SNConnectionTypeInternal *underlyingConnectionType;

- (id)description;
- (void).cxx_destruct;
- (long long)technology;
- (BOOL)canUseWiFiDirectly;
- (id)initWithTechnology:(long long)a0;
- (BOOL)isEdge;
- (BOOL)isWWAN;

@end
