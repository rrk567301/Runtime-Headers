@class NSArray;

@interface AMTextDetector : NSObject

@property (class, readonly, nonatomic) AMTextDetector *sharedTextDetector;

@property (retain) NSArray *_typeDictionaries;
@property (readonly, nonatomic) NSArray *supportedTypeIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)_emailAddressHandler;
- (void)_buildTypeDictionaries;
- (id)_typeDictionaryForIdentifier:(id)a0;
- (id)localizedNameForTypeIdentifier:(id)a0;
- (id)matchesInString:(id)a0 withType:(id)a1 error:(id *)a2;

@end
