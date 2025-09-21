@class NSString;

@interface SUCoreRollbackDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL rollbackEligible;
@property (retain, nonatomic) NSString *restoreVersion;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *productBuildVersion;
@property (retain, nonatomic) NSString *releaseType;

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
