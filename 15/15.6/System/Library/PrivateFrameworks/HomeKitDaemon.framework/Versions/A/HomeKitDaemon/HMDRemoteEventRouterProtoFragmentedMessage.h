@class NSData;

@interface HMDRemoteEventRouterProtoFragmentedMessage : PBCodable <NSCopying> {
    struct { unsigned char totalFragments : 1; unsigned char totalSize : 1; unsigned char fragmentNumber : 1; unsigned char routerVersion : 1; } _has;
}

@property (readonly, nonatomic) char hasFragmentData;
@property (retain, nonatomic) NSData *fragmentData;
@property (nonatomic) char hasFragmentNumber;
@property (nonatomic) unsigned int fragmentNumber;
@property (nonatomic) char hasTotalSize;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) char hasTotalFragments;
@property (nonatomic) unsigned long long totalFragments;
@property (nonatomic) char hasRouterVersion;
@property (nonatomic) unsigned int routerVersion;

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
