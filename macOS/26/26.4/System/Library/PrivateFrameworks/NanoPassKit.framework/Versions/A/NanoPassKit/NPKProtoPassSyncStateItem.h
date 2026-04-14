@class NSString, NSData, NSMutableArray;

@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying> {
    struct { unsigned char sequenceCounter : 1; } _has;
}

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL hasSequenceCounter;
@property (nonatomic) unsigned int sequenceCounter;
@property (retain, nonatomic) NSData *manifestHash;
@property (retain, nonatomic) NSMutableArray *manifestEntrys;

+ (Class)manifestEntryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addManifestEntry:(id)a0;
- (void)clearManifestEntrys;
- (id)manifestEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)manifestEntrysCount;

@end
