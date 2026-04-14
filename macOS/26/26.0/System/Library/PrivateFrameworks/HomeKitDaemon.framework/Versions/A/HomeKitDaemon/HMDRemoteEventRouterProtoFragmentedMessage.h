@class NSData;

@interface HMDRemoteEventRouterProtoFragmentedMessage : PBCodable <NSCopying> {
    struct { unsigned char totalFragments : 1; unsigned char totalSize : 1; unsigned char fragmentNumber : 1; unsigned char routerVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFragmentData;
@property (retain, nonatomic) NSData *fragmentData;
@property (nonatomic) BOOL hasFragmentNumber;
@property (nonatomic) unsigned int fragmentNumber;
@property (nonatomic) BOOL hasTotalSize;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) BOOL hasTotalFragments;
@property (nonatomic) unsigned long long totalFragments;
@property (nonatomic) BOOL hasRouterVersion;
@property (nonatomic) unsigned int routerVersion;

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
