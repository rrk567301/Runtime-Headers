@class NSString;

@interface ATXPBContactModeEntityMetrics : PBCodable <NSCopying> {
    struct { unsigned char numUniqueIncomingInteractionSenders : 1; unsigned char numUniqueOutgoingInteractionRecipients : 1; } _has;
}

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasNumUniqueOutgoingInteractionRecipients;
@property (nonatomic) unsigned int numUniqueOutgoingInteractionRecipients;
@property (nonatomic) char hasNumUniqueIncomingInteractionSenders;
@property (nonatomic) unsigned int numUniqueIncomingInteractionSenders;
@property (readonly, nonatomic) char hasActivityState;
@property (retain, nonatomic) NSString *activityState;

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
