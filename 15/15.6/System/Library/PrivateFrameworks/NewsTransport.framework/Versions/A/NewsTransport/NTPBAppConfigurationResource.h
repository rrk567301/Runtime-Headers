@class NSData, NSString, NTPBDate;

@interface NTPBAppConfigurationResource : PBCodable <NSCopying> {
    struct { unsigned char maxAge : 1; } _has;
}

@property (readonly, nonatomic) char hasGzippedConfigurationData;
@property (retain, nonatomic) NSData *gzippedConfigurationData;
@property (readonly, nonatomic) char hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) char hasLastFetchedDate;
@property (retain, nonatomic) NTPBDate *lastFetchedDate;
@property (readonly, nonatomic) char hasLastModifiedDate;
@property (retain, nonatomic) NTPBDate *lastModifiedDate;
@property (readonly, nonatomic) char hasLastModifiedString;
@property (retain, nonatomic) NSString *lastModifiedString;
@property (nonatomic) char hasMaxAge;
@property (nonatomic) long long maxAge;
@property (readonly, nonatomic) char hasResourceID;
@property (retain, nonatomic) NSString *resourceID;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
