@class NSString, TRIAppContainer, NSURL;

@interface TRIDynamicNamespaceRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *teamId;
@property (readonly, nonatomic) TRIAppContainer *appContainer;
@property (readonly, nonatomic) int cloudKitContainer;
@property (readonly, nonatomic) unsigned int compatibilityVersion;
@property (readonly, nonatomic) NSURL *defaultsFileURL;
@property (readonly, nonatomic) char hasFetched;

+ (id)dynamicNamespaceRecordWithName:(id)a0 teamId:(id)a1 appContainer:(id)a2 cloudKitContainer:(int)a3 compatibilityVersion:(unsigned int)a4 defaultsFileURL:(id)a5 hasFetched:(char)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)copyWithReplacementAppContainer:(id)a0;
- (id)copyWithReplacementCloudKitContainer:(int)a0;
- (id)copyWithReplacementDefaultsFileURL:(id)a0;
- (id)copyWithReplacementHasFetched:(char)a0;
- (id)copyWithReplacementTeamId:(id)a0;
- (void)defaultEncodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 teamId:(id)a1 appContainer:(id)a2 cloudKitContainer:(int)a3 compatibilityVersion:(unsigned int)a4 defaultsFileURL:(id)a5 hasFetched:(char)a6;
- (char)isEqualToDynamicNamespaceRecord:(id)a0;

@end
