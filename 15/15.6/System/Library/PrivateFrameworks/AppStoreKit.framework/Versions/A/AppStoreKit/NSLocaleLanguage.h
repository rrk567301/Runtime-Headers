@class NSString;

@interface NSLocaleLanguage : NSObject

@property (copy) NSString *twoCharacterCode;
@property (copy) NSString *threeCharacterCode;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;

@end
