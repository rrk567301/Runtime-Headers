@class ICQIconSpecification, NSString, NSArray, ICQInAppAction, NSImage, NSColor;

@interface ICQInAppMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) ICQIconSpecification *iconSpecification;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL serverGenerated;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *conciseTitle;
@property (readonly, copy, nonatomic) NSString *sfSymbolName;
@property (readonly, copy, nonatomic) NSColor *sfSymbolColor;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSString *accountId;
@property (readonly, nonatomic) ICQInAppAction *dismissAction;
@property (readonly, copy, nonatomic) NSString *placement;
@property (readonly, nonatomic) NSImage *icon;

+ (id)airplaneMode;
+ (id)fallbackAction;
+ (id)quotaAlmostFull;
+ (id)actionFromOffer:(id)a0;
+ (id)dataRecoveryAlert;
+ (id)fallbackOffer;
+ (id)quotaAlmostFullForOffer:(id)a0;
+ (id)quotaAlmostFullLongForOffer:(id)a0;
+ (id)quotaFull;
+ (id)quotaFullForOffer:(id)a0;
+ (id)quotaFullLongForOffer:(id)a0;
+ (id)serverUnreachable;
+ (id)universalLinkFromOffer:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)didDisplayMessage;
- (void)fetchIconIfNeededWithCompletion:(id /* block */)a0;
- (id)initWithContentType:(unsigned long long)a0 identifier:(id)a1 reason:(id)a2 title:(id)a3 subTitle:(id)a4 conciseTitle:(id)a5 sfSymbolName:(id)a6 sfSymbolColor:(id)a7 accountId:(id)a8 bundleID:(id)a9 actions:(id)a10 dismissAction:(id)a11 iconSpecification:(id)a12 serverGenerated:(BOOL)a13;
- (id)initWithContentType:(unsigned long long)a0 identifier:(id)a1 reason:(id)a2 title:(id)a3 subTitle:(id)a4 sfSymbolName:(id)a5 accountId:(id)a6 bundleID:(id)a7 actions:(id)a8 dismissAction:(id)a9 iconSpecification:(id)a10;
- (id)initWithContentType:(unsigned long long)a0 identifier:(id)a1 reason:(id)a2 title:(id)a3 subTitle:(id)a4 sfSymbolName:(id)a5 accountId:(id)a6 bundleID:(id)a7 actions:(id)a8 dismissAction:(id)a9 iconSpecification:(id)a10 serverGenerated:(BOOL)a11;
- (id)initWithContentType:(unsigned long long)a0 identifier:(id)a1 reason:(id)a2 title:(id)a3 subTitle:(id)a4 sfSymbolName:(id)a5 accountId:(id)a6 bundleID:(id)a7 actions:(id)a8 iconSpecification:(id)a9;

@end
