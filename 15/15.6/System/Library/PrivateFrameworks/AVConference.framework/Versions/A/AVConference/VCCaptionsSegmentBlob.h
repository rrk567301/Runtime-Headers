@class NSString;

@interface VCCaptionsSegmentBlob : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char hasSpaceAfter : 1; } _has;
}

@property (nonatomic) char hasConfidence;
@property (nonatomic) unsigned int confidence;
@property (nonatomic) char hasHasSpaceAfter;
@property (nonatomic) char hasSpaceAfter;
@property (readonly, nonatomic) char hasText;
@property (retain, nonatomic) NSString *text;

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
- (id)initWithSFTranscriptionSegment:(id)a0 isLast:(char)a1;

@end
