@class NSArray;

@interface AMTextDetector : NSObject

@property (class, readonly, nonatomic) AMTextDetector *sharedTextDetector;

@property (retain) NSArray *_typeDictionaries;
@property (readonly, nonatomic) NSArray *supportedTypeIdentifiers;

- (void).cxx_destruct;
- (id)init;
- (id)localizedNameForTypeIdentifier:(id)a0;
- (id)matchesInString:(id)a0 withType:(id)a1 error:(id *)a2;
- (void)_buildTypeDictionaries;
- (id /* block */)_emailAddressHandler;
- (id)_typeDictionaryForIdentifier:(id)a0;

@end
