@class NSString, NSArray;

@interface ILWatchedQueryNode : ILObserverNode {
    NSString *query;
    struct __MDQuery { } *queryRef;
    NSArray *queryScope;
    int queryRunMode;
}

- (void)dealloc;
- (id)query;
- (void)setQuery:(id)a0;
- (struct __MDQuery { } *)queryRef;
- (id)initWithObserver:(id)a0 query:(id)a1;
- (void)setQueryScope:(id)a0;
- (void)setQueryRunMode:(int)a0;
- (void)setQueryRef:(struct __MDQuery { } *)a0;
- (id)queryScope;
- (int)queryRunMode;

@end
