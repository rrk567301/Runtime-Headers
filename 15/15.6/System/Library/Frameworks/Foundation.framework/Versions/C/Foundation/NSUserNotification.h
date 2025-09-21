@class NSData, NSString, NSArray, NSURL, NSDate, NSAttributedString, NSDictionary, NSUserNotificationAction, NSImage, NSDateComponents, NSTimeZone;

@interface NSUserNotification : NSObject <NSCoding, NSCopying> {
    id _internal;
}

@property (retain) id _storageID;
@property (readonly, nonatomic) char _hasContentImage;
@property (copy, nonatomic) NSData *_identityImageData;
@property (copy, nonatomic) NSData *_contentImageData;
@property (copy) NSURL *_imageURL;
@property char _ignoresDoNotDisturb;
@property char _clearable;
@property unsigned long long _style;
@property (readonly) NSDate *_nextFireDate;
@property (readonly) char _snoozed;
@property (readonly) double _snoozeInterval;
@property (readonly) double _snoozedDate;
@property long long _badgeCount;
@property unsigned long long _displayStyle;
@property char _poofsOnCancel;
@property (copy) NSDateComponents *_deliveryExpiration;
@property (copy) NSDate *_eventDate;
@property char _dismissAfterDuration;
@property char _actionButtonIsSnooze;
@property (copy) NSString *_dateString;
@property (getter=_isAllDayEvent) char _allDayEvent;
@property (copy) NSDateComponents *duration;
@property (copy) NSImage *_identityImage;
@property char _identityImageHasBorder;
@property unsigned long long _identityImageStyle;
@property char _persistent;
@property (copy) NSArray *_alternateActionButtonTitles;
@property (readonly) unsigned long long _alternateActionIndex;
@property char _alwaysShowAlternateActionMenu;
@property char _showsButtons;
@property char _lockscreenOnly;
@property char _substitutesEmojiInResponse;
@property char _hasAttachment;
@property (readonly, getter=_isRemote) char _remote;
@property (copy) NSString *_proxyIdentifier;
@property (copy) NSArray *peopleIdentifiers;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (copy) NSString *informativeText;
@property (copy) NSString *actionButtonTitle;
@property (copy) NSDictionary *userInfo;
@property (copy) NSDate *deliveryDate;
@property (copy) NSTimeZone *deliveryTimeZone;
@property (copy) NSDateComponents *deliveryRepeatInterval;
@property (readonly, copy) NSDate *actualDeliveryDate;
@property (readonly, getter=isPresented) char presented;
@property (readonly, getter=isRemote) char remote;
@property (copy) NSString *soundName;
@property char hasActionButton;
@property (readonly) long long activationType;
@property (copy) NSString *otherButtonTitle;
@property (copy) NSString *identifier;
@property (copy) NSImage *contentImage;
@property char hasReplyButton;
@property (copy) NSString *responsePlaceholder;
@property (readonly, copy) NSAttributedString *response;
@property (copy) NSArray *additionalActions;
@property (readonly, copy) NSUserNotificationAction *additionalActivationAction;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)supportsSecureCoding;
+ (void)_closestDatesForStartDate:(id)a0 earliestDate:(id)a1 timeZone:(id)a2 deliveryRepeatInterval:(id)a3 returnDateBefore:(id *)a4 returnDateAfter:(id *)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_areIdentifiersEqual:(id)a0;
- (id)_secureEncodedUserInfo;
- (void)_setActivationType:(long long)a0;
- (void)_setActualDeliveryDate:(id)a0;
- (void)_setIdentityImage:(id)a0 withIdentifier:(id)a1;
- (void)_setPresented:(char)a0;
- (void)_setRemote:(char)a0;
- (void)_setSnoozeInterval:(double)a0;
- (void)_setSnoozed:(char)a0;
- (void)_setSnoozedDate:(double)a0;
- (void)setContentImage:(id)a0;

@end
