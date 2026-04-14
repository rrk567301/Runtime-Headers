@class NSString, NSNumber, NSDictionary;

@interface AMSMediaRestrictionsRatingItem : NSObject <NSCoding, NSSecureCoding> {
    void /* function */ ratingSystem;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *ratingSystem;
@property (nonatomic, readonly) NSNumber *ratingValue;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithRatingSystem:(id)a0 intValue:(long long)a1;
- (id)initWithRatingSystem:(id)a0 numberValue:(id)a1;

@end
