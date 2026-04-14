@class NSString, NSMutableArray;

@interface NTPBUserInfo : PBCodable <NSCopying> {
    struct { unsigned char subscriberType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStorefrontId;
@property (retain, nonatomic) NSString *storefrontId;
@property (retain, nonatomic) NSMutableArray *preferredLanguages;
@property (nonatomic) BOOL hasSubscriberType;
@property (nonatomic) int subscriberType;

+ (Class)preferredLanguagesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addPreferredLanguages:(id)a0;
- (void)clearPreferredLanguages;
- (id)preferredLanguagesAtIndex:(unsigned long long)a0;
- (unsigned long long)preferredLanguagesCount;

@end
