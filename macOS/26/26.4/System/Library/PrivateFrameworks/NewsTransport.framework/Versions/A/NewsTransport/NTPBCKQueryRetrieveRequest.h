@class NTPBCKRecordZoneIdentifier, NTPBCKQuery, NSData, NTPBCKRequestedFields;

@interface NTPBCKQueryRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char limit : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NTPBCKQuery *query;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) unsigned int limit;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) NTPBCKRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) NTPBCKRequestedFields *requestedFields;

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
