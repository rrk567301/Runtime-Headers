@class EDPersistedMessageID, EDPersistedRichLinkID;

@interface EDIndexedRichLink : NSObject

@property (nonatomic, readonly) EDPersistedMessageID *messageID;
@property (nonatomic, readonly) EDPersistedRichLinkID *richLinkID;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessageID:(id)a0 richLinkID:(id)a1;

@end
