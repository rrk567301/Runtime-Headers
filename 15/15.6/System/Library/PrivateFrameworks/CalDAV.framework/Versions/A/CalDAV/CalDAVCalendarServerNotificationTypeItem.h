@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteNotification;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteReply;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *resourceChanged;
@property (readonly, nonatomic) char isInviteReply;
@property (readonly, nonatomic) char isInviteNotification;
@property (readonly, nonatomic) char isResourceChanged;

- (id)description;
- (void).cxx_destruct;
- (id)copyParseRules;
- (char)notificationNameIn:(id)a0;
- (char)notificationNameMatches:(id)a0;

@end
