@class NSString, AMSMediaRestrictionsRatingItem;

@interface AMSMediaRestrictionsValue : NSObject {
    void /* function */ _value;
}

@property (nonatomic, readonly) long long valueType;
@property (nonatomic, readonly) id _value;
@property (nonatomic, readonly) AMSMediaRestrictionsRatingItem *ratingItem;
@property (nonatomic, readonly) BOOL boolValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) id dictionaryValue;

+ (id)withString:(id)a0;
+ (id)withRatingItem:(id)a0;
+ (id)withBool:(BOOL)a0;
+ (id)withInt:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBoolValue:(BOOL)a0;
- (id)initWithStringValue:(id)a0;
- (id)initWithIntValue:(long long)a0;
- (id)initWithRatingItem:(id)a0;

@end
