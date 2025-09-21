@class NSString, NSDictionary;

@interface BDSCloudSyncDiagnosticDatabaseInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char attached;
@property (nonatomic) char establishedSalt;
@property (copy, nonatomic) NSString *container;
@property (readonly, nonatomic) NSDictionary *stateForLog;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttached:(char)a0 establishedSalt:(char)a1 container:(id)a2;

@end
