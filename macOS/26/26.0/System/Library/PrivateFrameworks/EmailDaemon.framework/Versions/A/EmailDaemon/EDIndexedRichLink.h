@class EDPersistedMessageID, EDPersistedRichLinkID;

@interface EDIndexedRichLink : NSObject

@property (nonatomic, readonly) EDPersistedMessageID *messageID;
@property (nonatomic, readonly) EDPersistedRichLinkID *richLinkID;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageID:(id)a0 richLinkID:(id)a1;

@end
