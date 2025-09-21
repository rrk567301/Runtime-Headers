@class NSData, NSString, HDCodableSyncIdentity;

@interface HDCodableOnboardingCompletion : PBCodable <NSCopying> {
    struct { unsigned char completionDate : 1; unsigned char countryCodeProvenance : 1; unsigned char modificationDate : 1; unsigned char version : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) char hasFeatureIdentifier;
@property (retain, nonatomic) NSString *featureIdentifier;
@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasCompletionDate;
@property (nonatomic) double completionDate;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) char hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;
@property (nonatomic) char hasCountryCodeProvenance;
@property (nonatomic) long long countryCodeProvenance;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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
- (char)isValidWithError:(id *)a0;
- (id)decodedCompletionDate;
- (id)decodedModificationDate;
- (id)decodedUUID;

@end
