@class NSDate;

@interface RTReviewedPlace : NSObject

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSDate *lastSuggestedReviewDate;
@property (readonly, nonatomic) char hasUserReviewed;
@property (readonly, nonatomic) NSDate *modifiedDate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMuid:(unsigned long long)a0 lastSuggestedReviewDate:(id)a1 hasUserReviewed:(char)a2 modifiedDate:(id)a3;

@end
