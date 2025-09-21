@class NSString;

@interface HMMediaGroupProtoMediaDestination : PBCodable <NSCopying> {
    struct { unsigned char supportedOptions : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasParentIdentifier;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (nonatomic) char hasSupportedOptions;
@property (nonatomic) unsigned long long supportedOptions;
@property (readonly, nonatomic) char hasAudioGroupIdentifier;
@property (retain, nonatomic) NSString *audioGroupIdentifier;

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

@end
