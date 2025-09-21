@class NSString, NSArray, TPSSearchQuery;

@interface TPSSearchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ deviceExpertResponse;
    void /* function */ items;
    void /* function */ suggestions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSArray *suggestions;
@property (nonatomic, retain) TPSSearchQuery *query;

+ (id)makeResultWith:(id)a0 items:(id)a1 suggestions:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)append:(id)a0;
- (void)replaceItemsWith:(id)a0;

@end
