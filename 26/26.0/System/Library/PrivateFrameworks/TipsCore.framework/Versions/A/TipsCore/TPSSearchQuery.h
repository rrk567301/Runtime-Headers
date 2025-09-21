@class NSString;

@interface TPSSearchQuery : NSObject <NSSecureCoding> {
    void /* function */ identifier;
    void /* function */ searchTerm;
    void /* function */ rankingModifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long matchingStyle;
@property (nonatomic) long long contentTypeFilter;
@property (nonatomic) long long maxCount;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic, copy) id /* block */ rankingModifier;
@property (nonatomic, readonly) NSString *description;

+ (id)escapeSearchTerm:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 searchTerm:(id)a1;
- (id)initWithIdentifier:(id)a0 searchTerm:(id)a1 options:(unsigned long long)a2 matchingStyle:(long long)a3 contentTypeFilter:(long long)a4;
- (id)makeCSQueryWith:(id)a0;

@end
