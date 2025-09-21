@class BSAuditToken, NSString;

@interface UNNotificationConnectionDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) BSAuditToken *auditToken;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, getter=isInternalTool) BOOL internalTool;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0 bundleIdentifier:(id)a1 internalTool:(BOOL)a2;

@end
