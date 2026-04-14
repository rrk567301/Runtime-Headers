@class NSString;

@interface WBSSavedAccountAdditionalSite : NSObject

@property (readonly, nonatomic) NSString *site;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSite:(id)a0;

@end
