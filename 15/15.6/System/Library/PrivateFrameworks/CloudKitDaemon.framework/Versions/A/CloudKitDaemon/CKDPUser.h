@class CKDPUserAlias, NSString, CKDPProtectionInfo, CKDPIdentifier;

@interface CKDPUser : PBCodable <NSCopying> {
    struct { unsigned char isInNetwork : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPIdentifier *identifier;
@property (readonly, nonatomic) char hasAlias;
@property (retain, nonatomic) CKDPUserAlias *alias;
@property (readonly, nonatomic) char hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) char hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic) char hasIsInNetwork;
@property (nonatomic) char isInNetwork;

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
