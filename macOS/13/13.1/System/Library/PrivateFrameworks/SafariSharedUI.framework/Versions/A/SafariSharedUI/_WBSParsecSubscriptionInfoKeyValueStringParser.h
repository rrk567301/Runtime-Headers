@class NSString;

@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject {
    NSString *_string;
    unsigned long long _index;
}

+ (id)parseKeyValuePairsFromString:(id)a0;

- (void).cxx_destruct;
- (id)_initWithString:(id)a0;
- (BOOL)_isAtEnd;
- (id)_parseKeyValuePairs;
- (BOOL)_parseKeyValuePairWithKey:(id *)a0 value:(id *)a1;
- (id)_parseKey;
- (id)_parseValue;
- (id)_parseJSONValue;
- (id)_parseUpToCharacterFromSet:(id)a0;
- (void)_skipWhitespace;
- (unsigned short)_previewCharacter;
- (unsigned short)_consumeCharacter;

@end
