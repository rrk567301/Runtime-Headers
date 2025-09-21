@class NSString, NSMutableArray;

@interface C2MPDeviceInfo : PBCodable <NSCopying> {
    struct { unsigned char isAppleInternal : 1; } _has;
}

@property (readonly, nonatomic) char hasProductName;
@property (retain, nonatomic) NSString *productName;
@property (readonly, nonatomic) char hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) char hasProductVersion;
@property (retain, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) char hasProductBuild;
@property (retain, nonatomic) NSString *productBuild;
@property (nonatomic) char hasIsAppleInternal;
@property (nonatomic) char isAppleInternal;
@property (readonly, nonatomic) char hasProcessName;
@property (retain, nonatomic) NSString *processName;
@property (readonly, nonatomic) char hasProcessVersion;
@property (retain, nonatomic) NSString *processVersion;
@property (readonly, nonatomic) char hasProcessUuid;
@property (retain, nonatomic) NSString *processUuid;
@property (readonly, nonatomic) char hasUserDefaultTestName;
@property (retain, nonatomic) NSString *userDefaultTestName;
@property (retain, nonatomic) NSMutableArray *internalTestConfigs;

+ (Class)internalTestConfigType;

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
- (void)addInternalTestConfig:(id)a0;
- (void)clearInternalTestConfigs;
- (id)internalTestConfigAtIndex:(unsigned long long)a0;
- (unsigned long long)internalTestConfigsCount;

@end
