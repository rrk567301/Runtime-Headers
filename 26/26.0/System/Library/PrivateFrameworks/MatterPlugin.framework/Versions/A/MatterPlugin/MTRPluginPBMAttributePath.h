@class MTRAttributePath, MTRPluginPBMClusterPath;

@interface MTRPluginPBMAttributePath : PBCodable <NSCopying> {
    struct { unsigned char attributeID : 1; } _has;
}

@property (retain, nonatomic) MTRAttributePath *attributePath;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasClusterPath;
@property (retain, nonatomic) MTRPluginPBMClusterPath *clusterPath;
@property (nonatomic) BOOL hasAttributeID;
@property (nonatomic) unsigned int attributeID;

+ (id)attributePathWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2;

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
- (id)initWithAttributePath:(id)a0;

@end
