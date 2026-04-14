@class NSDictionary;

@interface BDSCloudSyncDiagnosticSyncEngineInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL establishedSalt;
@property (readonly, nonatomic) NSDictionary *stateForLog;

- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEstablishedSalt:(BOOL)a0;

@end
