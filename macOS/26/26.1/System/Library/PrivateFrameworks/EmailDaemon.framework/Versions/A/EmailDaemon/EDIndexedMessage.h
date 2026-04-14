@class EDPersistedMessageID;

@interface EDIndexedMessage : NSObject

@property (nonatomic, readonly) EDPersistedMessageID *messageID;
@property (nonatomic, readonly) BOOL hasBodyData;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithMessageID:(id)a0 hasBodyData:(BOOL)a1;

@end
