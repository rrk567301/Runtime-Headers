@class NSString;

@interface HMMediaGroupProtoMediaDestination : PBCodable <NSCopying> {
    struct { unsigned char supportedOptions : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (nonatomic) BOOL hasSupportedOptions;
@property (nonatomic) unsigned long long supportedOptions;
@property (readonly, nonatomic) BOOL hasAudioGroupIdentifier;
@property (retain, nonatomic) NSString *audioGroupIdentifier;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
