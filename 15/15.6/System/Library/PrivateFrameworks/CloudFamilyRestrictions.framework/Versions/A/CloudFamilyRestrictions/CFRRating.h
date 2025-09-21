@class NSString;

@interface CFRRating : NSObject

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *localizedShortName;
@property (nonatomic) long long rank;

+ (id)ratingFromDictionary:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToRating:(id)a0;

@end
