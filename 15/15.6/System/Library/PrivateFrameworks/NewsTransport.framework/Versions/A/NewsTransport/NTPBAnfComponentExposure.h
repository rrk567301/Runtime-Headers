@class NTPBIssueViewData, NSString, NTPBIssueExposureData, NTPBIssueData, NSData, NSMutableArray;

@interface NTPBAnfComponentExposure : PBCodable <NSCopying> {
    struct { unsigned char backendArticleVersionInt64 : 1; unsigned char publisherArticleVersionInt64 : 1; } _has;
}

@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) char hasAnfComponentType;
@property (retain, nonatomic) NSString *anfComponentType;
@property (readonly, nonatomic) char hasAnfComponentId;
@property (retain, nonatomic) NSString *anfComponentId;
@property (readonly, nonatomic) char hasAnfComponentRole;
@property (retain, nonatomic) NSString *anfComponentRole;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) NSString *metadata;
@property (readonly, nonatomic) char hasArticleVersion;
@property (retain, nonatomic) NSString *articleVersion;
@property (nonatomic) char hasPublisherArticleVersionInt64;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic) char hasBackendArticleVersionInt64;
@property (nonatomic) long long backendArticleVersionInt64;
@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) char hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (readonly, nonatomic) char hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;

+ (Class)fractionalCohortMembershipType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFractionalCohortMembership:(id)a0;
- (void)clearFractionalCohortMemberships;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)a0;
- (unsigned long long)fractionalCohortMembershipsCount;

@end
