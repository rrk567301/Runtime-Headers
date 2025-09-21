@class NSString, NSData;

@interface HDCodableTinkerPairingRequest : PBRequest <NSCopying> {
    struct { unsigned char guardianDSID : 1; unsigned char setupType : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) char hasGuardianIcloudIdentifier;
@property (retain, nonatomic) NSString *guardianIcloudIdentifier;
@property (nonatomic) char hasSetupType;
@property (nonatomic) int setupType;
@property (readonly, nonatomic) char hasGuardianFirstName;
@property (retain, nonatomic) NSString *guardianFirstName;
@property (readonly, nonatomic) char hasGuardianLastName;
@property (retain, nonatomic) NSString *guardianLastName;
@property (nonatomic) char hasGuardianDSID;
@property (nonatomic) long long guardianDSID;
@property (readonly, nonatomic) char hasProfileIdentifier;
@property (retain, nonatomic) NSData *profileIdentifier;
@property (readonly, nonatomic) char hasTinkerFirstName;
@property (retain, nonatomic) NSString *tinkerFirstName;
@property (readonly, nonatomic) char hasTinkerLastName;
@property (retain, nonatomic) NSString *tinkerLastName;

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
- (int)StringAsSetupType:(id)a0;
- (id)setupTypeAsString:(int)a0;

@end
