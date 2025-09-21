@class NSData, NSString;

@interface SYPBContentItem : PBCodable <NSCopying> {
    struct { unsigned char previewLoadLevel : 1; } _has;
}

@property (retain, nonatomic) NSData *itemIdentifierData;
@property (readonly, nonatomic) char hasDisplayTitle;
@property (retain, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) char hasSourceIdentifier;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) char hasSourceLastKnownName;
@property (retain, nonatomic) NSString *sourceLastKnownName;
@property (readonly, nonatomic) char hasItemURL;
@property (retain, nonatomic) NSString *itemURL;
@property (readonly, nonatomic) char hasUserActivityData;
@property (retain, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) char hasLinkPreviewMetadata;
@property (retain, nonatomic) NSData *linkPreviewMetadata;
@property (nonatomic) char hasPreviewLoadLevel;
@property (nonatomic) long long previewLoadLevel;

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

@end
