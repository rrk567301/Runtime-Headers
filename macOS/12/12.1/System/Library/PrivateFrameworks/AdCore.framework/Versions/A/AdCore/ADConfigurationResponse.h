@class NSString, NSMutableArray;

@interface ADConfigurationResponse : PBCodable <NSCopying> {
    struct { unsigned char bannerProxyType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *theConfigurations;
@property (readonly, nonatomic) BOOL hasResourceProxyURL;
@property (retain, nonatomic) NSString *resourceProxyURL;
@property (readonly, nonatomic) BOOL hasResourceConnectProxyURL;
@property (retain, nonatomic) NSString *resourceConnectProxyURL;
@property (nonatomic) BOOL hasBannerProxyType;
@property (nonatomic) int bannerProxyType;
@property (readonly, nonatomic) BOOL hasConfigVersion;
@property (retain, nonatomic) NSString *configVersion;

+ (Class)theConfigurationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addTheConfiguration:(id)a0;
- (unsigned long long)theConfigurationsCount;
- (void)clearTheConfigurations;
- (id)theConfigurationAtIndex:(unsigned long long)a0;
- (id)bannerProxyTypeAsString:(int)a0;
- (int)StringAsBannerProxyType:(id)a0;

@end
