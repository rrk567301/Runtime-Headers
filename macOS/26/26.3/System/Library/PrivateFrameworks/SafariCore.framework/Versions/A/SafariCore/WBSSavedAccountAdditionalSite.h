@class NSString;

@interface WBSSavedAccountAdditionalSite : NSObject

@property (readonly, nonatomic) NSString *site;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSite:(id)a0;

@end
