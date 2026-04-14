@class NSString;

@interface TPSAppSearchQuery : NSObject {
    void /* function */ identifier;
    void /* unknown type, empty encoding */ _searchTerm;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic) long long origin;

+ (id)queryWithSearchTerm:(id)a0 origin:(long long)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSearchTerm:(id)a0 origin:(long long)a1 identifier:(id)a2;

@end
