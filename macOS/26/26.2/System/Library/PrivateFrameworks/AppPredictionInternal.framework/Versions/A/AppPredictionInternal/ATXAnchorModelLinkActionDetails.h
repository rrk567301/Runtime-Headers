@class NSString, LNAction;

@interface ATXAnchorModelLinkActionDetails : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *actionId;
@property (readonly, nonatomic) LNAction *linkAction;

+ (id)encodedStringForLinkAction:(id)a0;
+ (id)linkActionFromEncodedString:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBundleID:(id)a0 actionId:(id)a1 linkAction:(id)a2;
- (id)initWithBundleID:(id)a0 actionId:(id)a1 linkActionEncodedString:(id)a2;

@end
