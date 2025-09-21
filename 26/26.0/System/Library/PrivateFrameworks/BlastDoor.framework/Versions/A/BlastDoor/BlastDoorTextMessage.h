@class NSDate, NSString, NSUUID, BlastDoorTextMessageMessageTypeWrapper, BlastDoorTextMessage_MessageSummaryInfo, NSArray, BlastDoorNicknameInformation, BlastDoorMetadata;

@interface BlastDoorTextMessage : NSObject {
    void /* unknown type, empty encoding */ textMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BlastDoorTextMessageMessageTypeWrapper *messageSubType;
@property (nonatomic, readonly) NSUUID *replyToGUID;
@property (nonatomic, readonly) NSString *threadIdentifierGUID;
@property (nonatomic, readonly) NSString *threadOriginatorFallbackHash;
@property (nonatomic, readonly) NSString *expressiveSendStyleIdentifier;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) BOOL has_groupParticipantVersion;
@property (nonatomic, readonly) unsigned long long groupParticipantVersion;
@property (nonatomic, readonly) BOOL has_groupProtocolVersion;
@property (nonatomic, readonly) unsigned long long groupProtocolVersion;
@property (nonatomic, readonly) BOOL has_groupPhotoCreationTime;
@property (nonatomic, readonly) unsigned long long groupPhotoCreationTime;
@property (nonatomic, readonly) BOOL has_transcriptBackgroundVersion;
@property (nonatomic, readonly) unsigned long long transcriptBackgroundVersion;
@property (nonatomic, readonly) BlastDoorTextMessage_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) BOOL isAutoReply;
@property (nonatomic, readonly) NSString *availabilityVerificationRecipientChannelIDPrefix;
@property (nonatomic, readonly) NSString *availabilityVerificationRecipientEncryptionValidationToken;
@property (nonatomic, readonly) NSString *availabilityOffGridRecipientSubscriptionValidationToken;
@property (nonatomic, readonly) NSString *availabilityOffGridRecipientEncryptionValidationToken;
@property (nonatomic, readonly) BOOL has_seenAsOffGrid;
@property (nonatomic, readonly) BOOL seenAsOffGrid;
@property (nonatomic, readonly) NSString *lastPublisherOfOffGridStatus;
@property (nonatomic, readonly) BlastDoorNicknameInformation *nicknameInformation;
@property (nonatomic, readonly) NSString *truncatedNicknameRecordKey;
@property (nonatomic, readonly) BOOL isExpirable;
@property (nonatomic, readonly) BOOL isSOS;
@property (nonatomic, readonly) BOOL isCritical;
@property (nonatomic, readonly) BOOL has_replicationSourceID;
@property (nonatomic, readonly) long long replicationSourceID;
@property (nonatomic, readonly) long long scheduleType;
@property (nonatomic, readonly) NSDate *scheduledDate;
@property (nonatomic, readonly) NSArray *replicatedFallbackGUIDs;
@property (nonatomic, readonly) BOOL has_isBIAMessage;
@property (nonatomic, readonly) BOOL isBIAMessage;
@property (nonatomic, readonly) NSString *biaReferenceID;

- (id)init;
- (void).cxx_destruct;

@end
