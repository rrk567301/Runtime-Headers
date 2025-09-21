@class NSString, NSDictionary;

@interface BDSCloudSyncDiagnosticDatabaseInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL attached;
@property (nonatomic) BOOL establishedSalt;
@property (copy, nonatomic) NSString *container;
@property (readonly, nonatomic) NSDictionary *stateForLog;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttached:(BOOL)a0 establishedSalt:(BOOL)a1 container:(id)a2;

@end
