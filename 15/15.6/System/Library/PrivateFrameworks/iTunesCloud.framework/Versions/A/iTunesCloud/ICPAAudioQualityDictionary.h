@class NSString;

@interface ICPAAudioQualityDictionary : PBCodable <NSCopying> {
    long long _bitDepth;
    long long _bitRate;
    long long _sampleRate;
    NSString *_channelLayoutDescription;
    unsigned int _codec;
    char _isSpatialized;
    struct { unsigned char bitDepth : 1; unsigned char bitRate : 1; unsigned char sampleRate : 1; unsigned char codec : 1; unsigned char isSpatialized : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
