@class NSString, BDSCloudSyncDiagnosticSyncEngineInfo, NSArray, NSDictionary, BDSCloudSyncDiagnosticDatabaseInfo;

@interface BDSCloudSyncDiagnosticInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char enabledSync;
@property (nonatomic) long long accountStatus;
@property (copy, nonatomic) NSString *container;
@property (nonatomic) char gettingAccountInfo;
@property (retain, nonatomic) BDSCloudSyncDiagnosticDatabaseInfo *privateDatabaseInfo;
@property (retain, nonatomic) BDSCloudSyncDiagnosticSyncEngineInfo *privateDatabaseSyncEngineInfo;
@property (retain, nonatomic) NSArray *entityInfos;
@property (readonly, nonatomic) NSDictionary *stateForLog;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnabledSync:(char)a0 accountStatus:(long long)a1 container:(id)a2 gettingAccountInfo:(char)a3 privateDatabaseInfo:(id)a4 privateDatabaseSyncEngineInfo:(id)a5 entityInfos:(id)a6;

@end
