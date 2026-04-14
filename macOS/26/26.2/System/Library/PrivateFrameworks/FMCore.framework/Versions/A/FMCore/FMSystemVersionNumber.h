@class NSString;

@interface FMSystemVersionNumber : NSObject

@property (nonatomic) long long baseNumber;
@property (copy, nonatomic) NSString *baseLetter;
@property (nonatomic) long long buildNumber;
@property (copy, nonatomic) NSString *suffix;

- (long long)compare:(id)a0;
- (id)debugDescription;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
