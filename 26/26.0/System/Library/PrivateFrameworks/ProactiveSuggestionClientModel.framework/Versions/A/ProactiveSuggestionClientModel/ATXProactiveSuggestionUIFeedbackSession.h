@class NSUUID, NSString, NSOrderedSet, NSDate, NSMutableOrderedSet;
@protocol ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol;

@interface ATXProactiveSuggestionUIFeedbackSession : NSObject <NSSecureCoding> {
    NSMutableOrderedSet *_engagedUUIDs;
    NSMutableOrderedSet *_rejectedUUIDs;
    NSMutableOrderedSet *_shownUUIDs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) NSUUID *blendingUICacheUpdateUUID;
@property (readonly, nonatomic) NSOrderedSet *engagedUUIDs;
@property (readonly, nonatomic) NSOrderedSet *rejectedUUIDs;
@property (readonly, nonatomic) NSOrderedSet *shownUUIDs;
@property (readonly, nonatomic) id<ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol> sessionMetadata;

- (id)validSessionMetadataClassNames;
- (id)initWithSessionUUID:(id)a0 sessionIdentifier:(id)a1 consumerSubType:(unsigned char)a2 sessionStartDate:(id)a3 sessionEndDate:(id)a4 blendingUICacheUpdateUUID:(id)a5 engagedUUIDs:(id)a6 rejectedUUIDs:(id)a7 shownUUIDs:(id)a8 sessionMetadata:(id)a9;
- (id)initWithSessionIdentifier:(id)a0;
- (void)updateEngagedUUIDs:(id)a0 rejectedUUIDs:(id)a1 shownUUIDs:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)mutableRejectedUUIDs;
- (void)updateConsumerSubTypeIfUnset:(unsigned char)a0;
- (id)mutableShownUUIDs;
- (void)updateBlendingUICacheUpdateUUIDIfUnset:(id)a0;
- (void)updateSessionStartDateIfUnset:(id)a0;
- (id)mutableEngagedUUIDs;
- (id)initWithCoder:(id)a0;
- (void)updateSessionMetadataIfUnset:(id)a0;
- (void)updateSessionEndDateIfUnset:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToATXProactiveSuggestionUIFeedbackSession:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValidSession;
- (void).cxx_destruct;

@end
