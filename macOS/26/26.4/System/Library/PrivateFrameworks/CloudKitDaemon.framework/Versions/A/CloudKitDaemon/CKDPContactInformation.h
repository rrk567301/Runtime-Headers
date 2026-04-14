@class NSString;

@interface CKDPContactInformation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEmailAddress;
@property (retain, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) BOOL hasContainerScopedUserId;
@property (retain, nonatomic) NSString *containerScopedUserId;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) BOOL hasCanonicalPhoneNumber;
@property (retain, nonatomic) NSString *canonicalPhoneNumber;

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

@end
