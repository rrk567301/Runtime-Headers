@class NSString;

@interface VCCaptionsSegmentBlob : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char hasSpaceAfter : 1; } _has;
}

@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) unsigned int confidence;
@property (nonatomic) BOOL hasHasSpaceAfter;
@property (nonatomic) BOOL hasSpaceAfter;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *text;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSFTranscriptionSegment:(id)a0 isLast:(BOOL)a1;

@end
