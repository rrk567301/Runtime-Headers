@class NSDictionary;

@interface WBSPasswordBreachConfigurationDictionaryUnpacker : NSObject {
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) char errorOccurred;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)URLForKey:(id)a0;
- (unsigned long long)unsignedIntegerForKey:(id)a0 minimumValue:(unsigned long long)a1 maximumValue:(unsigned long long)a2;
- (id)_valueOfClass:(Class)a0 forKey:(id)a1 required:(char)a2;
- (id)dataFromHexStringForKey:(id)a0 expectedLength:(id)a1;
- (char)optionalBoolForKey:(id)a0 defaultValue:(char)a1;
- (id)sortedUnsignedIntegerArrayForKey:(id)a0 minimumValue:(unsigned long long)a1 maximumValue:(unsigned long long)a2 ascending:(char)a3;
- (id)stringForKey:(id)a0 minimumLength:(unsigned long long)a1;

@end
