@class NSString, FCThreadSafeMutableDictionary;

@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType> {
    FCThreadSafeMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)interestTokenForWrappingKeyIDs:(id)a0;
- (void)removeAllWrappingKeys;
- (id)wrappingKeyForWrappingKeyID:(id)a0;
- (void)setWrappingKey:(id)a0 forWrappingKeyID:(id)a1;
- (id)init;

@end
