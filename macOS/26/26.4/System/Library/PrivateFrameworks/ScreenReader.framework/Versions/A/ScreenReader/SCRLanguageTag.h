@class NSString;

@interface SCRLanguageTag : NSObject

@property (copy, nonatomic) NSString *taggedString;
@property (copy, nonatomic) NSString *languageID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)a0 languageID:(id)a1;

@end
