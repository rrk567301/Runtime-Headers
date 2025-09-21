@class _NSCacheSearchResult;

@interface _NSMenuKeyResults : NSObject {
    void /* unknown type, empty encoding */ result;
    void /* unknown type, empty encoding */ results;
}

@property (class, nonatomic, readonly) long long bestMatchPenalty;

@property (nonatomic, readonly) char hasMatch;
@property (nonatomic, readonly) _NSCacheSearchResult *bestResult;
@property (nonatomic, readonly) long long bestPenalty;

- (id)init;
- (void).cxx_destruct;
- (void)addResultFor:(id)a0 indexInMenu:(long long)a1 matchPenalty:(long long)a2 replacingPreviousMatch:(char)a3;
- (void)validateResultsBy:(id /* block */)a0;

@end
