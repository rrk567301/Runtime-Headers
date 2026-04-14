@class NSString, NSArray, _TtC18AppleMediaServices28AgeGroupContentPolicyContent;

@interface AMSAgeGroupContentPolicy : NSObject {
    void /* function */ identifier;
    void /* function */ ageGroup;
    void /* function */ recommendedContentRatings;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *ageGroup;
@property (nonatomic, readonly) BOOL allowPurchases;
@property (nonatomic, readonly) NSArray *recommendedContentRatings;
@property (nonatomic, readonly) _TtC18AppleMediaServices28AgeGroupContentPolicyContent *content;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
