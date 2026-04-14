@class NSString, NSArray;

@interface SRUIFLightweightQueryHistory : NSObject {
    void /* function */ siriAppDomain;
    void /* function */ userDefaultsKey;
    void /* unknown type, empty encoding */ currentHistoryIndex;
}

@property (nonatomic, readonly) long long maxQueries;
@property (nonatomic, readonly) NSString *siriAppDomain;
@property (nonatomic, readonly) NSString *userDefaultsKey;
@property (nonatomic, copy) NSArray *queryHistory;

+ (id)shared;

- (void)clearHistory;
- (void).cxx_destruct;
- (id)init;
- (void)resetNavigation;
- (id)getNextQueryWithCurrentText:(id)a0;
- (id)getPreviousQueryWithCurrentText:(id)a0;
- (void)storeQuery:(id)a0;

@end
