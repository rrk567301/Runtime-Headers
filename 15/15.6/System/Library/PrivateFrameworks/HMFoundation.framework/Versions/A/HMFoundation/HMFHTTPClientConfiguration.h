@interface HMFHTTPClientConfiguration : HMFObject <NSCopying>

@property char requiresEncryption;
@property char allowsAnonymousConnection;
@property char allowsCellularAccess;
@property char supportsWakeOnLAN;
@property char monitorsReachability;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
