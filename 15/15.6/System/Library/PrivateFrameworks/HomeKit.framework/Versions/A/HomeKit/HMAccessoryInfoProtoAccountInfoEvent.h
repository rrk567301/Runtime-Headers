@class NSString;

@interface HMAccessoryInfoProtoAccountInfoEvent : PBCodable <NSCopying> {
    struct { unsigned char signedIn : 1; } _has;
}

@property (readonly, nonatomic) char hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) char hasAaAltDSID;
@property (retain, nonatomic) NSString *aaAltDSID;
@property (readonly, nonatomic) char hasAmsAltDSID;
@property (retain, nonatomic) NSString *amsAltDSID;
@property (nonatomic) char hasSignedIn;
@property (nonatomic) char signedIn;

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
