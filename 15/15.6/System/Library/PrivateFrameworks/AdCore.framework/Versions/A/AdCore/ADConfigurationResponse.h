@class NSString, NSMutableArray;

@interface ADConfigurationResponse : PBCodable <NSCopying> {
    struct { unsigned char bannerProxyType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *theConfigurations;
@property (readonly, nonatomic) char hasResourceProxyURL;
@property (retain, nonatomic) NSString *resourceProxyURL;
@property (readonly, nonatomic) char hasResourceConnectProxyURL;
@property (retain, nonatomic) NSString *resourceConnectProxyURL;
@property (nonatomic) char hasBannerProxyType;
@property (nonatomic) int bannerProxyType;
@property (readonly, nonatomic) char hasConfigVersion;
@property (retain, nonatomic) NSString *configVersion;

+ (Class)theConfigurationType;

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
- (int)StringAsBannerProxyType:(id)a0;
- (void)addTheConfiguration:(id)a0;
- (id)bannerProxyTypeAsString:(int)a0;
- (void)clearTheConfigurations;
- (id)theConfigurationAtIndex:(unsigned long long)a0;
- (unsigned long long)theConfigurationsCount;

@end
