@class NSString, NSData;

@interface IDSQRProtoPluginControlRequest : PBRequest <NSCopying> {
    struct { unsigned char pluginStreamId : 1; } _has;
}

@property (nonatomic) unsigned int pluginOperation;
@property (retain, nonatomic) NSString *pluginName;
@property (nonatomic) char hasPluginStreamId;
@property (nonatomic) unsigned int pluginStreamId;
@property (readonly, nonatomic) char hasPluginClientRawPublicKey;
@property (retain, nonatomic) NSData *pluginClientRawPublicKey;

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
