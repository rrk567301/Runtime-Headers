@interface TVAppServices.TVAppBagMock : NSObject <TVAppBagObjCProtocol> {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ cachedData;
    void /* unknown type, empty encoding */ prewarmCallCount;
}

- (id)init;
- (void).cxx_destruct;
- (void)prewarm;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)urlForKey:(id)a0;
- (id)booleanForKey:(id)a0;
- (id)cachedArrayForKey:(id)a0;
- (id)cachedBooleanForKey:(id)a0;
- (id)cachedDictionaryForKey:(id)a0;
- (id)cachedDoubleForKey:(id)a0;
- (id)cachedIntegerForKey:(id)a0;
- (id)cachedStringForKey:(id)a0;
- (id)cachedURLForKey:(id)a0;

@end
