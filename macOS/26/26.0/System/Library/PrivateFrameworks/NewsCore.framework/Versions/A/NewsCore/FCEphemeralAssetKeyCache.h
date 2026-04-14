@class NSString, FCThreadSafeMutableDictionary;

@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType> {
    FCThreadSafeMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)wrappingKeyForWrappingKeyID:(id)a0;
- (id)init;
- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(id)a0 forWrappingKeyID:(id)a1;
- (id)interestTokenForWrappingKeyIDs:(id)a0;
- (void).cxx_destruct;

@end
