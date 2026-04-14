@class NSMutableArray;

@interface VCCaptionsTranscriptionBlob : PBCodable <NSCopying> {
    struct { unsigned char isFinal : 1; unsigned char isLocal : 1; } _has;
}

@property (nonatomic) unsigned int utteranceNumber;
@property (nonatomic) unsigned int updateNumber;
@property (nonatomic) BOOL hasIsLocal;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL hasIsFinal;
@property (nonatomic) BOOL isFinal;
@property (retain, nonatomic) NSMutableArray *segments;

+ (Class)segmentsType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addSegments:(id)a0;
- (void)clearSegments;
- (unsigned long long)segmentsCount;
- (id)segmentsAtIndex:(unsigned long long)a0;
- (id)initWithSFTranscription:(id)a0 final:(BOOL)a1 isLocal:(BOOL)a2 utteranceNumber:(unsigned int)a3 updateNumber:(unsigned int)a4;

@end
