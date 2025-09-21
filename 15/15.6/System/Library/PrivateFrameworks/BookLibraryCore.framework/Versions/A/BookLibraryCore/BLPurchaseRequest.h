@class NSXPCListenerEndpoint, NSString, NSSet, NSURL, NSDictionary, NSNumber;

@interface BLPurchaseRequest : BLRequest <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *buyParameters;
@property (retain, nonatomic) NSNumber *storeIdentifier;
@property (retain, nonatomic) NSURL *permlink;
@property (copy, nonatomic) NSString *permlinkTitle;
@property (nonatomic, getter=isPreOrder) char preOrder;
@property (retain, nonatomic) NSSet *storeIdentifiersToDownload;
@property (nonatomic, getter=isSupplementalContent) char supplementalContent;
@property (retain, nonatomic) NSXPCListenerEndpoint *paymentSheetListenerEndpoint;
@property (nonatomic, getter=isAudiobook) char audiobook;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (retain, nonatomic) NSDictionary *analyticsInfo;
@property (nonatomic, getter=isRestore) char restore;
@property (nonatomic, getter=shouldSuppressNetworkEvaluatorDialogs) char suppressNetworkEvaluatorDialogs;
@property (nonatomic, getter=isUserInitiated) char userInitiated;
@property (retain, nonatomic) NSString *presentingSceneIdentifier;
@property (copy, nonatomic) NSString *logUUID;

+ (id)requestWithBuyParameters:(id)a0 storeIdentifier:(id)a1;
+ (id)requestWithPermlink:(id)a0 title:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
