@class NSString, NSMutableArray;

@interface NSPPrivacyProxyObliviousTargetInfo : PBCodable <NSCopying> {
    struct { unsigned char proxyIndex : 1; unsigned char weight : 1; } _has;
}

@property (retain, nonatomic) NSString *targetHost;
@property (retain, nonatomic) NSString *proxyURLPath;
@property (nonatomic) BOOL hasProxyIndex;
@property (nonatomic) unsigned int proxyIndex;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int weight;
@property (retain, nonatomic) NSMutableArray *processes;

+ (Class)processesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)processesAtIndex:(unsigned long long)a0;
- (id)description;
- (void)addProcesses:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearProcesses;
- (unsigned long long)processesCount;

@end
