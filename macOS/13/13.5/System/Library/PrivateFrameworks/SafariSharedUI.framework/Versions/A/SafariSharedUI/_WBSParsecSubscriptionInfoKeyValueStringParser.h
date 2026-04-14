@class NSString;

@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject {
    NSString *_string;
    unsigned long long _index;
}

+ (id)parseKeyValuePairsFromString:(id)a0;

- (void).cxx_destruct;
- (id)_initWithString:(id)a0;
- (BOOL)_isAtEnd;
- (void)_skipWhitespace;
- (id)_parseJSONValue;
- (unsigned short)_consumeCharacter;
- (id)_parseKey;
- (BOOL)_parseKeyValuePairWithKey:(id *)a0 value:(id *)a1;
- (id)_parseKeyValuePairs;
- (id)_parseUpToCharacterFromSet:(id)a0;
- (id)_parseValue;
- (unsigned short)_previewCharacter;

@end
