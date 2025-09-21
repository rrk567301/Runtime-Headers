@class NSData, NSString, NSMutableArray;

@interface PLJournalEntryHeader : PBCodable <NSCopying> {
    struct { unsigned char payloadLength : 1; unsigned char entryType : 1; unsigned char payloadCRC : 1; unsigned char payloadVersion : 1; } _has;
}

@property (nonatomic) char hasEntryType;
@property (nonatomic) int entryType;
@property (readonly, nonatomic) char hasPayloadUUID;
@property (retain, nonatomic) NSData *payloadUUID;
@property (readonly, nonatomic) char hasPayloadID;
@property (retain, nonatomic) NSString *payloadID;
@property (nonatomic) char hasPayloadVersion;
@property (nonatomic) unsigned int payloadVersion;
@property (nonatomic) char hasPayloadLength;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) char hasPayloadCRC;
@property (nonatomic) unsigned int payloadCRC;
@property (retain, nonatomic) NSMutableArray *nilProperties;

+ (Class)nilPropertiesType;

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
- (int)StringAsEntryType:(id)a0;
- (id)entryTypeAsString:(int)a0;
- (void)addNilProperties:(id)a0;
- (void)clearNilProperties;
- (id)nilPropertiesAtIndex:(unsigned long long)a0;
- (unsigned long long)nilPropertiesCount;

@end
