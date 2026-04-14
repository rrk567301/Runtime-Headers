@class AXAuditPSN, NSString, NSImage;

@interface AXAuditApplication : NSObject

@property (retain, nonatomic) AXAuditPSN *psnObj;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSImage *icon;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
