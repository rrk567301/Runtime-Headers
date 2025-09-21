@class NSArray;

@interface CoreIDVShared.TagHelper : NSObject

@property (class, nonatomic, readonly) unsigned char basicCla;
@property (class, nonatomic, readonly) unsigned char basicAuthCla;
@property (class, nonatomic, readonly) unsigned char selectIns;
@property (class, nonatomic, readonly) unsigned char selectP1ByID;
@property (class, nonatomic, readonly) unsigned char selectP1EfUnderDfById;
@property (class, nonatomic, readonly) unsigned char selectP1DfByName;
@property (class, nonatomic, readonly) unsigned char selectP2;
@property (class, nonatomic, readonly) unsigned char selectP2NoResponseField;
@property (class, nonatomic, readonly) NSArray *ldsAppId;
@property (class, nonatomic, readonly) unsigned char getChallengeIns;
@property (class, nonatomic, readonly) long long getChallengeRespLen;
@property (class, nonatomic, readonly) unsigned char externalAuthIns;
@property (class, nonatomic, readonly) unsigned char readIns;
@property (class, nonatomic, readonly) NSArray *authMaterialAPDUHeader;

- (id)init;
- (void).cxx_destruct;

@end
