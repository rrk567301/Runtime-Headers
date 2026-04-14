@class NSString, NSURL;

@interface TPSUserGuideTopic : NSObject <TPSArticle> {
    void /* function */ productId;
    void /* function */ topicId;
    void /* function */ version;
    void /* function */ title;
    void /* function */ body;
}

@property (class, nonatomic, readonly) NSString *uti;

@property (nonatomic, readonly) NSURL *supportSiteURL;
@property (nonatomic, copy) NSString *productId;
@property (nonatomic, copy) NSString *topicId;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *body;

+ (BOOL)isValidIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProductIdentifier:(id)a0 topicIdentifier:(id)a1 version:(id)a2;
- (id)initWithSearchableItemUniqueIdentifier:(id)a0;
- (id)searchableItemUniqueIdentifierWith:(id)a0;

@end
