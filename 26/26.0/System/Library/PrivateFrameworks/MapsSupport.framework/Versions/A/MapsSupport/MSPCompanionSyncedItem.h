@class MSPHistoryEntryStorage, NSString, MSPBookmarkStorage, MSPPinStorage, PBUnknownFields;

@interface MSPCompanionSyncedItem : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char changeType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncId;
@property (retain, nonatomic) NSString *syncId;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasBookmark;
@property (retain, nonatomic) MSPBookmarkStorage *bookmark;
@property (readonly, nonatomic) BOOL hasPin;
@property (retain, nonatomic) MSPPinStorage *pin;
@property (readonly, nonatomic) BOOL hasSearchRequest;
@property (retain, nonatomic) MSPHistoryEntryStorage *searchRequest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (int)StringAsChangeType:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (id)changeTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
