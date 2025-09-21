@class EDPersistedMessageID;

@interface EDIndexedMessage : NSObject

@property (nonatomic, readonly) EDPersistedMessageID *messageID;
@property (nonatomic, readonly) BOOL hasBodyData;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageID:(id)a0 hasBodyData:(BOOL)a1;

@end
