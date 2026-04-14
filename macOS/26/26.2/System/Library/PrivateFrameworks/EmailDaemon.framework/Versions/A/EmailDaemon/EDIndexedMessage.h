@class EDPersistedMessageID;

@interface EDIndexedMessage : NSObject

@property (nonatomic, readonly) EDPersistedMessageID *messageID;
@property (nonatomic, readonly) BOOL hasBodyData;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMessageID:(id)a0 hasBodyData:(BOOL)a1;

@end
