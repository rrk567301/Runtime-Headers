@class NSString;

@interface SIRINLUINTERNALSSUSSUEncodingResult : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _encodings;
}

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) char hasSsuEncoderVersion;
@property (retain, nonatomic) NSString *ssuEncoderVersion;
@property (readonly, nonatomic) char hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) unsigned long long encodingsCount;
@property (readonly, nonatomic) float *encodings;

- (void)dealloc;
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
- (void)addEncoding:(float)a0;
- (void)clearEncodings;
- (float)encodingAtIndex:(unsigned long long)a0;
- (void)setEncodings:(float *)a0 count:(unsigned long long)a1;

@end
