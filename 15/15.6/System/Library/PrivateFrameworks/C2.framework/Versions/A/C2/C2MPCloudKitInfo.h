@class NSString, NSMutableArray;

@interface C2MPCloudKitInfo : PBCodable <NSCopying> {
    struct { unsigned char reportClientOperationFrequency : 1; unsigned char reportClientOperationFrequencyBase : 1; unsigned char reportOperationGroupFrequency : 1; unsigned char reportOperationGroupFrequencyBase : 1; unsigned char anonymous : 1; } _has;
}

@property (readonly, nonatomic) char hasClientProcessVersion;
@property (retain, nonatomic) NSString *clientProcessVersion;
@property (readonly, nonatomic) char hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) char hasContainer;
@property (retain, nonatomic) NSString *container;
@property (readonly, nonatomic) char hasEnvironment;
@property (retain, nonatomic) NSString *environment;
@property (nonatomic) char hasAnonymous;
@property (nonatomic) char anonymous;
@property (readonly, nonatomic) char hasContainerScopedUserIdentifier;
@property (retain, nonatomic) NSString *containerScopedUserIdentifier;
@property (readonly, nonatomic) char hasContainerScopedDeviceIdentifier;
@property (retain, nonatomic) NSString *containerScopedDeviceIdentifier;
@property (readonly, nonatomic) char hasApplicationBundleIdentifierOverrideForContainerAccess;
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, nonatomic) char hasApplicationBundleIdentifierOverrideForNetworkAttribution;
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, nonatomic) char hasDatabaseScope;
@property (retain, nonatomic) NSString *databaseScope;
@property (retain, nonatomic) NSMutableArray *operationGroups;
@property (nonatomic) char hasReportOperationGroupFrequency;
@property (nonatomic) unsigned long long reportOperationGroupFrequency;
@property (nonatomic) char hasReportOperationGroupFrequencyBase;
@property (nonatomic) unsigned long long reportOperationGroupFrequencyBase;
@property (retain, nonatomic) NSMutableArray *clientOperations;
@property (nonatomic) char hasReportClientOperationFrequency;
@property (nonatomic) unsigned long long reportClientOperationFrequency;
@property (nonatomic) char hasReportClientOperationFrequencyBase;
@property (nonatomic) unsigned long long reportClientOperationFrequencyBase;

+ (Class)clientOperationType;
+ (Class)operationGroupType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addClientOperation:(id)a0;
- (void)addOperationGroup:(id)a0;
- (void)clearClientOperations;
- (void)clearOperationGroups;
- (id)clientOperationAtIndex:(unsigned long long)a0;
- (unsigned long long)clientOperationsCount;
- (id)operationGroupAtIndex:(unsigned long long)a0;
- (unsigned long long)operationGroupsCount;

@end
