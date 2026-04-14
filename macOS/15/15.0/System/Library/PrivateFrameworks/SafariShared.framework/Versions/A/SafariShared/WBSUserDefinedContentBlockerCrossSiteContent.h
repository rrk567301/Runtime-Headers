@class NSString, NSDictionary;

@interface WBSUserDefinedContentBlockerCrossSiteContent : NSObject

@property (readonly, nonatomic) long long databaseID;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDictionary *extraAttributes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDatabaseID:(long long)a0 source:(id)a1 title:(id)a2 extraAttributes:(id)a3;
- (id)initWithSource:(id)a0 title:(id)a1 extraAttributes:(id)a2;
- (BOOL)isEquivalentToContent:(id)a0;

@end
