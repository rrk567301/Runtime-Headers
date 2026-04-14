@class NSString, NSDictionary, AMSURLResult, AMSMediaRestrictionsRatingItem, NSNumber;

@interface AMSMediaRestrictionsResult : NSObject

@property (nonatomic, readonly) AMSURLResult *rawResult;
@property (nonatomic, readonly) BOOL isSuccess;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSDictionary *responseData;
@property (nonatomic, readonly) AMSMediaRestrictionsRatingItem *tvRestriction;
@property (nonatomic, readonly) AMSMediaRestrictionsRatingItem *movieRestriction;
@property (nonatomic, readonly) NSNumber *allowPurchasesValue;
@property (nonatomic, readonly) NSNumber *isProfileLockSetValue;
@property (nonatomic, readonly) BOOL hasRestrictionKeys;
@property (nonatomic, readonly) NSString *description;

- (id)initWithResult:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
