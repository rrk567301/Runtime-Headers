@class NSString, NSMutableArray, ACProtobufURL;

@interface ACProtobufAccountType : PBCodable <NSCopying> {
    struct { unsigned char supportsAuthentication : 1; unsigned char visibility : 1; unsigned char obsolete : 1; unsigned char supportsMultipleAccounts : 1; } _has;
}

@property (retain, nonatomic) NSString *accountTypeDescription;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasObjectID;
@property (retain, nonatomic) ACProtobufURL *objectID;
@property (nonatomic) BOOL hasVisibility;
@property (nonatomic) int visibility;
@property (readonly, nonatomic) BOOL hasCredentialType;
@property (retain, nonatomic) NSString *credentialType;
@property (readonly, nonatomic) BOOL hasCredentialProtectionPolicy;
@property (retain, nonatomic) NSString *credentialProtectionPolicy;
@property (nonatomic) BOOL hasSupportsAuthentication;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) BOOL hasSupportsMultipleAccounts;
@property (nonatomic) BOOL supportsMultipleAccounts;
@property (readonly, nonatomic) BOOL hasOwningBundleID;
@property (retain, nonatomic) NSString *owningBundleID;
@property (nonatomic) BOOL hasObsolete;
@property (nonatomic) BOOL obsolete;
@property (retain, nonatomic) NSMutableArray *syncableEnumDataclasses;
@property (retain, nonatomic) NSMutableArray *supportedEnumDataclasses;

+ (Class)supportedEnumDataclassesType;
+ (Class)syncableEnumDataclassesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)syncableEnumDataclassesAtIndex:(unsigned long long)a0;
- (void)addSupportedEnumDataclasses:(id)a0;
- (void)addSyncableEnumDataclasses:(id)a0;
- (void)clearSupportedEnumDataclasses;
- (void)clearSyncableEnumDataclasses;
- (id)supportedEnumDataclassesAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedEnumDataclassesCount;
- (unsigned long long)syncableEnumDataclassesCount;

@end
