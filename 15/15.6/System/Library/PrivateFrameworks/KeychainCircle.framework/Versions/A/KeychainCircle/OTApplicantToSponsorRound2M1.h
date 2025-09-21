@class NSString, NSData;

@interface OTApplicantToSponsorRound2M1 : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPeerID;
@property (retain, nonatomic) NSString *peerID;
@property (readonly, nonatomic) char hasPermanentInfo;
@property (retain, nonatomic) NSData *permanentInfo;
@property (readonly, nonatomic) char hasPermanentInfoSig;
@property (retain, nonatomic) NSData *permanentInfoSig;
@property (readonly, nonatomic) char hasStableInfo;
@property (retain, nonatomic) NSData *stableInfo;
@property (readonly, nonatomic) char hasStableInfoSig;
@property (retain, nonatomic) NSData *stableInfoSig;

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
