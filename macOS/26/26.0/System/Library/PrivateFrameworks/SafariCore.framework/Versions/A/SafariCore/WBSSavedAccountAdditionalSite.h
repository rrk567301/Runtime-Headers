@class NSString;

@interface WBSSavedAccountAdditionalSite : NSObject

@property (readonly, nonatomic) NSString *site;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSite:(id)a0;

@end
