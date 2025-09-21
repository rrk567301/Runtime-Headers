@class NSString, NSDictionary, NSArray, NSURL, ICQLink;

@interface _ICQFollowupSpecification : NSObject {
    NSDictionary *_serverDict;
}

@property (nonatomic) char premiumOffer;
@property (nonatomic) char eventOffer;
@property (copy, nonatomic) NSString *offerId;
@property (retain, nonatomic) NSDictionary *serverDict;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *altMessage;
@property (retain, nonatomic) NSArray *links;
@property (copy, nonatomic) NSString *noteTitle;
@property (copy, nonatomic) NSString *noteSubTitle;
@property (copy, nonatomic) NSString *noteMessage;
@property (copy, nonatomic) NSString *altNoteMessage;
@property (retain, nonatomic) ICQLink *noteActivateLink;
@property (retain, nonatomic) ICQLink *noteClearLink;
@property (nonatomic, getter=isForAccountGroup) char forAccountGroup;
@property (nonatomic, getter=isZeroAction) char zeroAction;
@property (nonatomic) char badgeApp;
@property (nonatomic) long long followupDisplayStyle;
@property (copy, nonatomic) NSString *sfSymbolID;
@property (copy, nonatomic) NSString *sfSymbolBundlePath;
@property (readonly, nonatomic) NSURL *serverUIURL;
@property (readonly, nonatomic) NSURL *dynamicUIRouteURL;
@property (readonly, nonatomic) NSString *purchaseAttribution;
@property (copy, nonatomic) NSString *notifyingAppId;
@property (copy, nonatomic) NSString *groupIdentifier;

+ (id)sharedFollowUpController;
+ (void)clearFollowupWithController:(id)a0 offerType:(long long)a1 completion:(id /* block */)a2;
+ (void)clearLegacyFollowupWithController:(id)a0;
+ (void)clearNotificationWithController:(id)a0 offerType:(long long)a1 completion:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (long long)primaryAction;
- (id)identifierPrefix;
- (id)_buildFollowupItem;
- (void)_postFollowupWithController:(id)a0 completion:(id /* block */)a1;
- (void)addNotifyingAppIdForItem:(id)a0;
- (id)followupActionForLink:(id)a0;
- (id)followupActionForLink:(id)a0 needsFlow:(char)a1;
- (id)initWithServerDictionary:(id)a0;
- (void)postFollowupWithController:(id)a0;
- (void)postFollowupWithController:(id)a0 replaceExisting:(char)a1 completion:(id /* block */)a2;

@end
