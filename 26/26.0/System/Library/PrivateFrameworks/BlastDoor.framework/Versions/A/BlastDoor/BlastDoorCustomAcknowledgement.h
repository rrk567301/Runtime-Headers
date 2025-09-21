@class NSString, NSArray, BlastDoorBalloonPluginPayloadWrapper, NSAttributedString, BlastDoorTapBack_MessageSummaryInfo;

@interface BlastDoorCustomAcknowledgement : NSObject {
    void /* unknown type, empty encoding */ customAcknowledgement;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) NSString *associatedMessageFallbackHash;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) BlastDoorTapBack_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) BlastDoorBalloonPluginPayloadWrapper *payload;
@property (nonatomic, readonly) NSArray *attributionInfo;
@property (nonatomic, readonly) NSAttributedString *content;

- (id)init;
- (void).cxx_destruct;

@end
