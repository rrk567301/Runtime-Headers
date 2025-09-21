@class NSString;

@interface EDPBInteractionEventHeader : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying> {
    struct { unsigned char deviceId : 1; unsigned char userId : 1; unsigned char timezoneOffset : 1; unsigned char userSegment : 1; unsigned char version : 1; unsigned char categoryRootInstalled : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasUserId;
@property (nonatomic) long long userId;
@property (nonatomic) char hasDeviceId;
@property (nonatomic) long long deviceId;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) char hasTimezoneOffset;
@property (nonatomic) int timezoneOffset;
@property (nonatomic) char hasUserSegment;
@property (nonatomic) unsigned int userSegment;
@property (nonatomic) char hasCategoryRootInstalled;
@property (nonatomic) char categoryRootInstalled;

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
- (int)messageFrameType;

@end
