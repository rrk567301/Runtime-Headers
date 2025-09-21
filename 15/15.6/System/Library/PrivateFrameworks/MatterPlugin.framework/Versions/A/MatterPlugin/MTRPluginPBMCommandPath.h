@class MTRCommandPath, MTRPluginPBMClusterPath;

@interface MTRPluginPBMCommandPath : PBCodable <NSCopying> {
    struct { unsigned char commandID : 1; } _has;
}

@property (retain, nonatomic) MTRCommandPath *commandPath;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) char hasClusterPath;
@property (retain, nonatomic) MTRPluginPBMClusterPath *clusterPath;
@property (nonatomic) char hasCommandID;
@property (nonatomic) unsigned int commandID;

+ (id)commandPathWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2;

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
- (id)initWithCommandPath:(id)a0;

@end
