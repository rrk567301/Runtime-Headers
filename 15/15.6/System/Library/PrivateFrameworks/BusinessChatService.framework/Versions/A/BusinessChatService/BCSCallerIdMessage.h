@class NSString, BCSCallerIdLocalizedString;

@interface BCSCallerIdMessage : PBCodable <NSCopying> {
    struct { unsigned char phoneHash : 1; unsigned char isVerified : 1; } _has;
}

@property (nonatomic) char hasPhoneHash;
@property (nonatomic) long long phoneHash;
@property (readonly, nonatomic) char hasCompanyId;
@property (retain, nonatomic) NSString *companyId;
@property (readonly, nonatomic) char hasBusinessId;
@property (retain, nonatomic) NSString *businessId;
@property (readonly, nonatomic) char hasLocationId;
@property (retain, nonatomic) NSString *locationId;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) BCSCallerIdLocalizedString *name;
@property (readonly, nonatomic) char hasLogoUrl;
@property (retain, nonatomic) NSString *logoUrl;
@property (nonatomic) char hasIsVerified;
@property (nonatomic) char isVerified;
@property (readonly, nonatomic) char hasIntent;
@property (retain, nonatomic) BCSCallerIdLocalizedString *intent;
@property (readonly, nonatomic) char hasConflatedMuid;
@property (retain, nonatomic) NSString *conflatedMuid;

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
