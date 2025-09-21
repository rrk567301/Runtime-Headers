@class NTPBCKRecordIdentifier, NSString, NTPBCKRequestedFields;

@interface NTPBCKRecordRetrieveRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) NTPBCKRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) NTPBCKRequestedFields *requestedFields;
@property (readonly, nonatomic) char hasVersionETag;
@property (retain, nonatomic) NSString *versionETag;
@property (readonly, nonatomic) char hasClientVersionETag;
@property (retain, nonatomic) NSString *clientVersionETag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
