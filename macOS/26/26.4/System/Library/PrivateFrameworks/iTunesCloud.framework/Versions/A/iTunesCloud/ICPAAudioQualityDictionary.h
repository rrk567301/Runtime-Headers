@class NSString;

@interface ICPAAudioQualityDictionary : PBCodable <NSCopying> {
    long long _bitDepth;
    long long _bitRate;
    long long _sampleRate;
    NSString *_channelLayoutDescription;
    unsigned int _codec;
    BOOL _isSpatialized;
    struct { unsigned char bitDepth : 1; unsigned char bitRate : 1; unsigned char sampleRate : 1; unsigned char codec : 1; unsigned char isSpatialized : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
