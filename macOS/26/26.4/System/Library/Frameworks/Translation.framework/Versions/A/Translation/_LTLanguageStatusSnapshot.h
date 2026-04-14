@class NSMutableDictionary, _LTSupportedLocaleList;

@interface _LTLanguageStatusSnapshot : NSObject {
    NSMutableDictionary *_aiLocaleStatus;
    NSMutableDictionary *_traditionalLocaleStatus;
    _LTSupportedLocaleList *_supportedLocaleList;
}

- (void).cxx_destruct;
- (id)initWithLocaleList:(id)a0;
- (void)setStatus:(unsigned long long)a0 forLocale:(id)a1 withEngine:(long long)a2;
- (void)_setInitialSupportedStatus;
- (unsigned long long)_statusForLocale:(id)a0 withEngine:(long long)a1;
- (unsigned long long)_statusForPair:(id)a0 withEngine:(long long)a1;
- (unsigned long long)statusFromSingleEngineForPair:(id)a0;

@end
