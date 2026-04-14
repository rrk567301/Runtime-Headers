@class NSArray, NSString;

@interface CSUserQuery : CSSearchQuery

@property (copy) NSArray *filterQueries;
@property (readonly) NSString *keyboardLanguage;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long foundItemCount;

- (void)start;
- (void)cancel;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (id)keyboardLanguage;
- (void)setFilterQueries:(id)a0;
- (id)filterQueries;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2;

@end
