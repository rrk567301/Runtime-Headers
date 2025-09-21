@class NSString;

@interface PNRStringsFileReaderResult : NSObject

@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *city;
@property (readonly, nonatomic) long long score;

+ (long long)maxPossibleScore;

- (void).cxx_destruct;
- (char)isEqualTo:(id)a0;
- (id)aggregateStringWhileInCountry:(id)a0 forLanguage:(id)a1 ccOfNumber:(id)a2;
- (id)initWithCountry:(id)a0 region:(id)a1 city:(id)a2;
- (char)isPlaceHolderForEmpty;
- (id)separatorForLanguage:(id)a0;
- (char)shouldOrderCityFirstForLanguage:(id)a0 phoneNumberInCC:(id)a1;

@end
