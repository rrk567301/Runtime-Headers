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
- (void)dealloc;
- (void)addEncoding:(float)a0;
- (void)clearEncodings;
- (float)encodingAtIndex:(unsigned long long)a0;
- (void)setEncodings:(float *)a0 count:(unsigned long long)a1;

@end
