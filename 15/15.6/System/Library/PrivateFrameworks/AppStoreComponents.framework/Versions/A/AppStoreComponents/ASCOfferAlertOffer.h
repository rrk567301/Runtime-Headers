@class NSString, NSDictionary, NSArray, NSNumber, ASCAdamID;
@protocol ASCOffer;

@interface ASCOfferAlertOffer : NSObject <ASCOffer, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *alertTitle;
@property (readonly, copy, nonatomic) NSString *alertMessage;
@property (readonly, copy, nonatomic) NSString *alertFooterMessage;
@property (readonly, nonatomic) char isCancelable;
@property (readonly, copy, nonatomic) NSNumber *checkRestrictionsForContentRating;
@property (readonly, nonatomic) char shouldCheckForAvailableDiskSpace;
@property (readonly, copy, nonatomic) NSString *remoteControllerRequirement;
@property (readonly, nonatomic) char shouldIncludeActiveAccountInFooterMessage;
@property (readonly, nonatomic) char shouldPromptForConfirmation;
@property (readonly, copy, nonatomic) id<ASCOffer> completionOffer;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSDictionary *titles;
@property (readonly, copy, nonatomic) NSDictionary *subtitles;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) NSNumber *ageRating;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 titles:(id)a1 subtitles:(id)a2 flags:(long long)a3 ageRating:(id)a4 metrics:(id)a5 alertTitle:(id)a6 alertMessage:(id)a7 alertFooterMessage:(id)a8 isCancelable:(char)a9 checkRestrictionsForContentRating:(id)a10 shouldCheckForAvailableDiskSpace:(char)a11 remoteControllerRequirement:(id)a12 shouldIncludeActiveAccountInFooterMessage:(char)a13 shouldPromptForConfirmation:(char)a14 completionOffer:(id)a15;
- (id)offerWithMetrics:(id)a0;

@end
