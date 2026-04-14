@class NSString, NSUUID;

@interface ARAppConnection : NSObject <NSCopying, NSSecureCoding> {
    NSString *_auditTokenStr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowBundleIDOverride;
@property (readonly) NSString *deviceID;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly) NSUUID *sessionID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 deviceEndpoint:(id)a1;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 deviceID:(id)a1;

@end
