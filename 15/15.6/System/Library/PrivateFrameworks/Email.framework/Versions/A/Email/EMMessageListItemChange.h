@class NSArray, ECMessageFlags, NSString, NSDate, NSNumber;
@protocol EMMessageListItemChangeBusinessLogoID, EMMessageListItemChangeCategory, EMMessageListItemChangeFlagColors, EMCollectionItemID, EMMessageListItemChangeSummary, EMMessageListItemChangeBrandIndicatorLocation, EMMessageListItemChangeSendLaterDate, EMMessageListItemChangeGeneratedSummary, EMMessageListItemChangeSubject, EMMessageListItemChangeReadLater, EMMessageListItemChangeFollowUp;

@interface EMMessageListItemChange : NSObject <EFPubliclyDescribable, NSSecureCoding> {
    NSArray *_mailboxObjectIDs;
    NSArray *_mailboxes;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *displayDate;
@property (retain, nonatomic) id<EMMessageListItemChangeSubject> subject;
@property (copy, nonatomic) id<EMMessageListItemChangeSummary> summary;
@property (copy, nonatomic) id<EMMessageListItemChangeGeneratedSummary> generatedSummary;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property char isToMe;
@property char isCCMe;
@property (retain, nonatomic) ECMessageFlags *flags;
@property (retain, nonatomic) NSNumber *hasUnflagged;
@property (copy, nonatomic) id<EMMessageListItemChangeFlagColors> flagColors;
@property (retain, nonatomic) NSNumber *isVIP;
@property (retain, nonatomic) NSNumber *isBlocked;
@property (retain, nonatomic) NSNumber *unsubscribeType;
@property (retain, nonatomic) NSNumber *hasAttachments;
@property (retain, nonatomic) NSNumber *isAuthenticated;
@property (retain, nonatomic) NSNumber *allowAuthenticationWarning;
@property (retain, nonatomic) NSNumber *conversationNotificationLevel;
@property (retain, nonatomic) id<EMMessageListItemChangeBrandIndicatorLocation> brandIndicatorLocation;
@property (retain, nonatomic) id<EMMessageListItemChangeReadLater> readLater;
@property (retain, nonatomic) id<EMMessageListItemChangeSendLaterDate> sendLaterDate;
@property (retain, nonatomic) id<EMMessageListItemChangeFollowUp> followUp;
@property (retain, nonatomic) NSNumber *businessID;
@property (retain, nonatomic) id<EMMessageListItemChangeBusinessLogoID> businessLogoID;
@property (retain, nonatomic) id<EMMessageListItemChangeCategory> category;
@property (copy, nonatomic) NSArray *groupedSenderMessageListItems;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *conversationID;
@property (copy, nonatomic) NSArray *mailboxObjectIDs;
@property (copy, nonatomic) NSArray *mailboxes;
@property (retain, nonatomic) id<EMCollectionItemID> displayMessageItemID;
@property (retain, nonatomic) NSNumber *messageSize;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeFrom:(id)a0 to:(id)a1;
+ (id)changeForKeyPaths:(id)a0 ofItem:(id)a1;
+ (id)changesForKeyPaths:(id)a0 ofItems:(id)a1;
+ (id)changeForFlags:(id)a0;
+ (id)changeForUnsubscribeType:(long long)a0;
+ (id)changeFrom:(id)a0 to:(id)a1 with:(id)a2 hasChanges:(char)a3;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addChange:(id)a0;
- (id)_descriptionForInternal:(char)a0 useDebugDescriptions:(char)a1;
- (char)applyToMessageListItem:(id)a0;
- (id)changeDescriptionsForInternal:(char)a0 useDebugDescriptions:(char)a1;

@end
