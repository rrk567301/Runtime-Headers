@class NSData, NSString, NSUUID;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL fastOpenRequested;
@property (readonly) BOOL multipathRequested;
@property (readonly) NSData *sourceAppUniqueIdentifier;
@property (readonly) NSString *sourceAppSigningIdentifier;
@property (readonly) NSData *sourceAppAuditToken;
@property (readonly) NSUUID *filterFlowIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
