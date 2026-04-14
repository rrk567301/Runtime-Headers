@class NSString;

@interface WBSSavedAccountAdditionalSite : NSObject

@property (readonly, nonatomic) NSString *site;

- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithSite:(id)a0;

@end
