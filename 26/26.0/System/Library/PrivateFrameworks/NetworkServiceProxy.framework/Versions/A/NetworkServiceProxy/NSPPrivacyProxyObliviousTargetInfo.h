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

- (id)processesAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearProcesses;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addProcesses:(id)a0;
- (unsigned long long)processesCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
