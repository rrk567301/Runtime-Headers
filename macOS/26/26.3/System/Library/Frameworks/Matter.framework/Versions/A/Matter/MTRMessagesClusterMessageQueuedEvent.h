@class NSData;

@interface MTRMessagesClusterMessageQueuedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *messageID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
