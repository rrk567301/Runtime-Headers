@class NSString;

@interface TPSSearchResultItem : NSObject <NSSecureCoding> {
    void /* function */ documentIdentifier;
    void /* function */ collectionIdentifier;
    void /* function */ correlationIdentifier;
    void /* function */ contentType;
    void /* function */ title;
    void /* function */ body;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *documentIdentifier;
@property (nonatomic, copy) NSString *collectionIdentifier;
@property (nonatomic, copy) NSString *correlationIdentifier;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *body;
@property (nonatomic) double relevance;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 collectionIdentifier:(id)a1;

@end
