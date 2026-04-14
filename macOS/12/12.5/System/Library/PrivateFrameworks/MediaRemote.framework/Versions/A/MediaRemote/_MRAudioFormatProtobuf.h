@class NSString;

@interface _MRAudioFormatProtobuf : PBCodable <NSCopying> {
    long long _bitDepth;
    long long _bitrate;
    long long _sampleRate;
    NSString *_audioChannelLayoutDescription;
    unsigned int _channelLayout;
    unsigned int _codec;
    NSString *_groupID;
    NSString *_stableVariantID;
    int _tier;
    BOOL _multiChannel;
    BOOL _spatialized;
    struct { unsigned char bitDepth : 1; unsigned char bitrate : 1; unsigned char sampleRate : 1; unsigned char channelLayout : 1; unsigned char codec : 1; unsigned char tier : 1; unsigned char multiChannel : 1; unsigned char spatialized : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
