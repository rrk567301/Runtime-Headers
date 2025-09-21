@class NSString;

@interface VUIContentRating : NSObject

@property (readonly, nonatomic) long long ratingSystemKind;
@property (readonly, nonatomic) long long ratingSystem;
@property (readonly, copy, nonatomic) NSString *ratingSystemString;
@property (readonly, nonatomic, getter=isExplicitContent) char explicitContent;
@property (readonly, copy, nonatomic) NSString *ratingLabel;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, copy, nonatomic) NSString *ratingDescription;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)new;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStringRepresentation:(id)a0;
- (id)initWithRatingSystem:(long long)a0 ratingLabel:(id)a1 rank:(unsigned long long)a2 ratingDescription:(id)a3;
- (id)initWithRatingSystemString:(id)a0 ratingLabel:(id)a1 rank:(unsigned long long)a2 ratingDescription:(id)a3;
- (id)initWithRatingSystem:(long long)a0 explicitContent:(char)a1;

@end
