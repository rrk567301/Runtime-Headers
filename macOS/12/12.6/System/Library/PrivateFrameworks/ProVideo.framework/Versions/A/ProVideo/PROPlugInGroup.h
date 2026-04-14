@interface PROPlugInGroup : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (struct __CFUUID { } *)uuid;
- (id)displayName;
- (id)plugIns;
- (void)addPlugIn:(id)a0;
- (id)plugInsForProtocols:(id)a0;
- (id)initWithUUID:(struct __CFUUID { } *)a0 name:(id)a1 bundle:(id)a2;
- (void)removePlugIn:(id)a0;

@end
