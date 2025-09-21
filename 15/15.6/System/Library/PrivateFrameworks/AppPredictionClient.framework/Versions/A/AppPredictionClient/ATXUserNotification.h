@class ATXSharedDigestEngagementTrackingMetrics, NSUUID, NSString, NSData, NSDate, NSArray, ATXUserNotificationDerivedData;

@interface ATXUserNotification : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSDate *recordDate;
@property (copy, nonatomic) NSString *notificationID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (readonly, nonatomic) unsigned long long titleLength;
@property (readonly, nonatomic) unsigned long long subtitleLength;
@property (readonly, nonatomic) unsigned long long bodyLength;
@property (nonatomic) unsigned long long badge;
@property (copy, nonatomic) NSData *userInfo;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *threadID;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSArray *contactIDs;
@property (copy, nonatomic) NSArray *rawIdentifiers;
@property (nonatomic) char isMessage;
@property (nonatomic) char isGroupMessage;
@property (nonatomic) long long urgency;
@property (nonatomic) long long attachmentType;
@property (nonatomic) double appSpecifiedScore;
@property (retain, nonatomic) ATXUserNotificationDerivedData *derivedData;
@property (retain, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (nonatomic) char isSummarized;
@property (copy, nonatomic) NSString *summary;
@property (readonly, nonatomic) unsigned long long summaryLength;
@property (nonatomic) char isPartOfStack;
@property (nonatomic) char isStackSummary;
@property (nonatomic) unsigned long long positionInStack;
@property (nonatomic) unsigned long long numberOfNotificationsInStack;
@property (nonatomic) unsigned long long priorityStatus;
@property (nonatomic) unsigned long long summaryStatus;
@property (nonatomic) char isPriorityNotificationEnabled;
@property (nonatomic) char isNotificationSummaryEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)groupId;
- (id)jsonRepresentation;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (long long)compareForDigestRanking:(id)a0;
- (id)digestRankingHardcodedComparisonValue;
- (double)finalDigestScoreForMode:(id)a0;
- (char)hasPreviewableAttachment;
- (id)initFromJSON:(id)a0;
- (id)initFromNotificationData:(id)a0 date:(id)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 bundleID:(id)a5 threadID:(id)a6 categoryID:(id)a7;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 categoryID:(id)a9 derivedData:(id)a10;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 categoryID:(id)a9 sectionID:(id)a10 contactIDs:(id)a11 isGroupMessage:(char)a12 derivedData:(id)a13;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 categoryID:(id)a9 sectionID:(id)a10 contactIDs:(id)a11 isGroupMessage:(char)a12 derivedData:(id)a13 urgency:(long long)a14;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 categoryID:(id)a9 sectionID:(id)a10 contactIDs:(id)a11 rawIdentifiers:(id)a12 isGroupMessage:(char)a13 derivedData:(id)a14 urgency:(long long)a15;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 derivedData:(id)a9;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 sectionID:(id)a9 contactIDs:(id)a10 isGroupMessage:(char)a11 derivedData:(id)a12 urgency:(long long)a13;
- (id)initWithUUID:(id)a0 timestamp:(double)a1;
- (char)isEqualToATXUserNotification:(id)a0;

@end
