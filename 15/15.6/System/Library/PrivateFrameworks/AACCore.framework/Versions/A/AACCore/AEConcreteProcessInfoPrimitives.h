@interface AEConcreteProcessInfoPrimitives : NSObject <AEProcessInfoPrimitives>

@property (readonly) double systemUptime;

- (char)hasEntitlement:(id)a0;
- (char)isBeingTested;

@end
