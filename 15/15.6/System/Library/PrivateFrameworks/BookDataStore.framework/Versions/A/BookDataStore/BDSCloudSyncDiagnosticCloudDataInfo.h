@class NSString, NSDictionary;

@interface BDSCloudSyncDiagnosticCloudDataInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *saltedHashedID;
@property (readonly, nonatomic) NSDictionary *stateForLog;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 saltedHashedID:(id)a1;

@end
