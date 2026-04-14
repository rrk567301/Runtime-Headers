@class NSString, EDPersistedRichLinkID, NSURL;

@interface EDRichLinkData : NSObject

@property (readonly, nonatomic) EDPersistedRichLinkID *persistentID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 url:(id)a1;
- (id)initWithPersistentID:(id)a0 title:(id)a1 url:(id)a2;

@end
