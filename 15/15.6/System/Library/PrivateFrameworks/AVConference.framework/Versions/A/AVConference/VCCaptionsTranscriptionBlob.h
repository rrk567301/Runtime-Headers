@class NSMutableArray;

@interface VCCaptionsTranscriptionBlob : PBCodable <NSCopying> {
    struct { unsigned char isFinal : 1; unsigned char isLocal : 1; } _has;
}

@property (nonatomic) unsigned int utteranceNumber;
@property (nonatomic) unsigned int updateNumber;
@property (nonatomic) char hasIsLocal;
@property (nonatomic) char isLocal;
@property (nonatomic) char hasIsFinal;
@property (nonatomic) char isFinal;
@property (retain, nonatomic) NSMutableArray *segments;

+ (Class)segmentsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSegments:(id)a0;
- (void)clearSegments;
- (id)segmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)segmentsCount;
- (id)initWithSFTranscription:(id)a0 final:(char)a1 isLocal:(char)a2 utteranceNumber:(unsigned int)a3 updateNumber:(unsigned int)a4;

@end
