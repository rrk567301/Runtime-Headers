@class AXAuditElement, NSArray, NSString;

@interface AXAuditNode : NSObject

@property (retain, nonatomic) AXAuditElement *auditElement;
@property (retain, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *humanReadableDescription;
@property (copy, nonatomic) NSString *humanReadableRoleDescription;
@property (copy, nonatomic) NSString *className;
@property (nonatomic) BOOL isIgnored;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAuditElement:(id)a0 description:(id)a1 roleDescription:(id)a2;
- (void)debugPrintDescendants;
- (void)_printDescendantsWithLevel:(unsigned long long)a0;

@end
