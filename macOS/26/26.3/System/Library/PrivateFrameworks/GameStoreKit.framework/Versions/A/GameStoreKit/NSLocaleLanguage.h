@class NSString;

@interface NSLocaleLanguage : NSObject

@property (copy) NSString *twoCharacterCode;
@property (copy) NSString *threeCharacterCode;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
