@class NSData, NSString, NSMutableArray;

@interface BMPBUserActivityMetadataEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char hasAssociatedImageRepresentation : 1; } _has;
}

@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) char hasUserActivityData;
@property (retain, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (readonly, nonatomic) char hasAssociatedBundleId;
@property (retain, nonatomic) NSString *associatedBundleId;
@property (readonly, nonatomic) char hasAssociatedURLString;
@property (retain, nonatomic) NSString *associatedURLString;
@property (readonly, nonatomic) char hasModeIdentifier;
@property (retain, nonatomic) NSString *modeIdentifier;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) char hasHasAssociatedImageRepresentation;
@property (nonatomic) char hasAssociatedImageRepresentation;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;

+ (Class)topicsType;

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
- (void)addTopics:(id)a0;
- (void)clearTopics;
- (id)topicsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicsCount;

@end
