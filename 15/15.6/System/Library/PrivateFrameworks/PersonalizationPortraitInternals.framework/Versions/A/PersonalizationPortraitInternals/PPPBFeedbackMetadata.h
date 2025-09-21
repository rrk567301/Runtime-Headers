@class NSString;

@interface PPPBFeedbackMetadata : PBCodable <NSCopying> {
    struct { unsigned char unixTimestampSec : 1; unsigned char isMapped : 1; } _has;
}

@property (readonly, nonatomic) char hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) char hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) char hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) char hasUnixTimestampSec;
@property (nonatomic) unsigned long long unixTimestampSec;
@property (nonatomic) char hasIsMapped;
@property (nonatomic) char isMapped;

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
