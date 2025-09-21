@class NSData, PBUnknownFields;

@interface HWPDrawing : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char compressionAlgorithm : 1; unsigned char decompressedLength : 1; unsigned char strokeDataFieldCount : 1; unsigned char strokesCount : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasEncodedCanvasSize;
@property (retain, nonatomic) NSData *encodedCanvasSize;
@property (readonly, nonatomic) char hasEncodedStrokesFrame;
@property (retain, nonatomic) NSData *encodedStrokesFrame;
@property (nonatomic) char hasStrokesCount;
@property (nonatomic) unsigned int strokesCount;
@property (nonatomic) char hasCompressionAlgorithm;
@property (nonatomic) int compressionAlgorithm;
@property (nonatomic) char hasDecompressedLength;
@property (nonatomic) unsigned int decompressedLength;
@property (nonatomic) char hasStrokeDataFieldCount;
@property (nonatomic) unsigned int strokeDataFieldCount;
@property (readonly, nonatomic) char hasStrokes;
@property (retain, nonatomic) NSData *strokes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (int)StringAsCompressionAlgorithm:(id)a0;
- (id)compressionAlgorithmAsString:(int)a0;

@end
