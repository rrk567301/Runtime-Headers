@class NSString, NTPBIssueData;

@interface NTPBIssueDownload : PBCodable <NSCopying> {
    struct { unsigned char downloadLocation : 1; unsigned char downloadState : 1; unsigned char downloadType : 1; } _has;
}

@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic) char hasDownloadLocation;
@property (nonatomic) int downloadLocation;
@property (nonatomic) char hasDownloadState;
@property (nonatomic) int downloadState;
@property (nonatomic) char hasDownloadType;
@property (nonatomic) int downloadType;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
