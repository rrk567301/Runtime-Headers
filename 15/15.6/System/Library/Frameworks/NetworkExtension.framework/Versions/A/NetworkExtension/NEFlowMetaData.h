@class NSData, NSString, NSUUID;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char fastOpenRequested;
@property (readonly) char multipathRequested;
@property (readonly) NSData *sourceAppUniqueIdentifier;
@property (readonly) NSString *sourceAppSigningIdentifier;
@property (readonly) NSData *sourceAppAuditToken;
@property (readonly) NSUUID *filterFlowIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
