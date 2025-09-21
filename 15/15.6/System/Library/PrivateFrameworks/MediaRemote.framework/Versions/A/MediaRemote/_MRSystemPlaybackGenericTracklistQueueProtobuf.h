@class NSString, NSData;

@interface _MRSystemPlaybackGenericTracklistQueueProtobuf : PBCodable <NSCopying> {
    struct { unsigned char repeatMode : 1; unsigned char shuffleMode : 1; } _has;
}

@property (readonly, nonatomic) char hasFirstTrackIdentifier;
@property (retain, nonatomic) NSString *firstTrackIdentifier;
@property (readonly, nonatomic) char hasTrackIdentifiers;
@property (retain, nonatomic) NSString *trackIdentifiers;
@property (readonly, nonatomic) char hasCollectionIdentifierSet;
@property (retain, nonatomic) NSData *collectionIdentifierSet;
@property (nonatomic) char hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) char hasRepeatMode;
@property (nonatomic) int repeatMode;

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
- (int)StringAsShuffleMode:(id)a0;
- (int)StringAsRepeatMode:(id)a0;
- (id)repeatModeAsString:(int)a0;
- (id)shuffleModeAsString:(int)a0;

@end
