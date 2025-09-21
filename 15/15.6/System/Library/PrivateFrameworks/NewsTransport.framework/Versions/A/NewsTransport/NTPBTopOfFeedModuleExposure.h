@class NSData;

@interface NTPBTopOfFeedModuleExposure : PBCodable <NSCopying> {
    struct { unsigned char moduleEventType : 1; unsigned char moduleItemCount : 1; unsigned char moduleLocation : 1; } _has;
}

@property (nonatomic) char hasModuleEventType;
@property (nonatomic) int moduleEventType;
@property (nonatomic) char hasModuleLocation;
@property (nonatomic) int moduleLocation;
@property (nonatomic) char hasModuleItemCount;
@property (nonatomic) int moduleItemCount;
@property (readonly, nonatomic) char hasModuleExposureId;
@property (retain, nonatomic) NSData *moduleExposureId;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsModuleEventType:(id)a0;
- (int)StringAsModuleLocation:(id)a0;
- (id)moduleEventTypeAsString:(int)a0;
- (id)moduleLocationAsString:(int)a0;

@end
