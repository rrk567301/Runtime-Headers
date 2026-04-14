@class NSString, NSDictionary;

@interface CRKApplicationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *shortVersionString;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)bundleIdentifierFromDictionaryRepresentation:(id)a0;
+ (id)bundleIdentifiersFromDictionaryRepresentations:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 shortVersionString:(id)a1;

@end
