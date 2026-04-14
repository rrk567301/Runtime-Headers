@class NTPBCKRecordIdentifier, NSString, NTPBCKRequestedFields;

@interface NTPBCKRecordRetrieveRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) NTPBCKRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) NTPBCKRequestedFields *requestedFields;
@property (readonly, nonatomic) BOOL hasVersionETag;
@property (retain, nonatomic) NSString *versionETag;
@property (readonly, nonatomic) BOOL hasClientVersionETag;
@property (retain, nonatomic) NSString *clientVersionETag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
