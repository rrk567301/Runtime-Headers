@class NSData;

@interface HMDRemoteEventRouterProtoFragmentedMessage : PBCodable <NSCopying> {
    unsigned long long _totalFragments;
    unsigned long long _totalSize;
    NSData *_fragmentData;
    unsigned int _fragmentNumber;
    unsigned int _routerVersion;
    struct { unsigned char totalFragments : 1; unsigned char totalSize : 1; unsigned char fragmentNumber : 1; unsigned char routerVersion : 1; } _has;
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
