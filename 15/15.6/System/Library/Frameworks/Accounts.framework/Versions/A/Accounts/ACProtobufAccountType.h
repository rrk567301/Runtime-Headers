@class NSString, ACProtobufURL;

@interface ACProtobufAccountType : PBCodable <NSCopying> {
    struct { unsigned char supportsAuthentication : 1; unsigned char visibility : 1; unsigned char obsolete : 1; unsigned char supportsMultipleAccounts : 1; } _has;
}

@property (retain, nonatomic) NSString *accountTypeDescription;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasObjectID;
@property (retain, nonatomic) ACProtobufURL *objectID;
@property (nonatomic) char hasVisibility;
@property (nonatomic) int visibility;
@property (readonly, nonatomic) char hasCredentialType;
@property (retain, nonatomic) NSString *credentialType;
@property (readonly, nonatomic) char hasCredentialProtectionPolicy;
@property (retain, nonatomic) NSString *credentialProtectionPolicy;
@property (nonatomic) char hasSupportsAuthentication;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) char hasSupportsMultipleAccounts;
@property (nonatomic) char supportsMultipleAccounts;
@property (readonly, nonatomic) char hasOwningBundleID;
@property (retain, nonatomic) NSString *owningBundleID;
@property (nonatomic) char hasObsolete;
@property (nonatomic) char obsolete;

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

@end
