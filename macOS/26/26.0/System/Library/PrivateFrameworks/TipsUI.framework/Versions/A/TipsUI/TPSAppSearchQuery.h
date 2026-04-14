@class NSString, TPSSearchResult, NSError;

@interface TPSAppSearchQuery : NSObject {
    void /* function */ identifier;
    void /* unknown type, empty encoding */ _searchTerm;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic) long long origin;

+ (id)queryWithSearchTerm:(id)a0 origin:(long long)a1;

- (void)executeWithCompletionHandler:(void (^)(TPSSearchResult *, TPSSearchResult *, NSError *))a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSearchTerm:(id)a0 origin:(long long)a1 identifier:(id)a2;

@end
