@class NSString;

@interface CKDPContactInformation : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasEmailAddress;
@property (retain, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) char hasContainerScopedUserId;
@property (retain, nonatomic) NSString *containerScopedUserId;
@property (readonly, nonatomic) char hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) char hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (readonly, nonatomic) char hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) char hasCanonicalPhoneNumber;
@property (retain, nonatomic) NSString *canonicalPhoneNumber;

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
