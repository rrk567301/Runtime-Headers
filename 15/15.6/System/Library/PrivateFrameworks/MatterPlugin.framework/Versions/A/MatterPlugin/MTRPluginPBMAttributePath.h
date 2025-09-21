@class MTRAttributePath, MTRPluginPBMClusterPath;

@interface MTRPluginPBMAttributePath : PBCodable <NSCopying> {
    struct { unsigned char attributeID : 1; } _has;
}

@property (retain, nonatomic) MTRAttributePath *attributePath;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) char hasClusterPath;
@property (retain, nonatomic) MTRPluginPBMClusterPath *clusterPath;
@property (nonatomic) char hasAttributeID;
@property (nonatomic) unsigned int attributeID;

+ (id)attributePathWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2;

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
- (id)initWithAttributePath:(id)a0;

@end
