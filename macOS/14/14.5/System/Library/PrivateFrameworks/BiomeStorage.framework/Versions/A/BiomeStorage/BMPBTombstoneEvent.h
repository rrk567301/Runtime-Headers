@class NSString;

@interface BMPBTombstoneEvent : PBCodable <NSCopying> {
    struct { unsigned char length : 1; unsigned char offset : 1; unsigned char reason : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSegmentName;
@property (retain, nonatomic) NSString *segmentName;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) unsigned int offset;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) unsigned int length;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;
@property (readonly, nonatomic) BOOL hasProcessName;
@property (retain, nonatomic) NSString *processName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)reasonAsString:(int)a0;
- (int)StringAsReason:(id)a0;

@end
