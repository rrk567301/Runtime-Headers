@class NSError, NSMutableDictionary;

@interface ECTaggedHeaderParser : NSObject

@property (readonly, copy) NSMutableDictionary *headerFields;
@property (readonly, copy) NSError *parseError;

- (void).cxx_destruct;
- (id)initWithHeaderBody:(id)a0;
- (id)_parseTagValueList:(id)a0;
- (id)_errorWithType:(long long)a0 reason:(id)a1;

@end
