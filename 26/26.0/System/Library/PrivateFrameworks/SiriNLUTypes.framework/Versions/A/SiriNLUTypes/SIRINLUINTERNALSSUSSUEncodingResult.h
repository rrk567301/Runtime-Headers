@class NSString;

@interface SIRINLUINTERNALSSUSSUEncodingResult : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _encodings;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) BOOL hasSsuEncoderVersion;
@property (retain, nonatomic) NSString *ssuEncoderVersion;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) unsigned long long encodingsCount;
@property (readonly, nonatomic) float *encodings;

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
- (void).cxx_destruct;
- (void)addEncoding:(float)a0;
- (void)clearEncodings;
- (float)encodingAtIndex:(unsigned long long)a0;
- (void)setEncodings:(float *)a0 count:(unsigned long long)a1;

@end
