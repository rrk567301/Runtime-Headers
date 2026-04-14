@class NSData;

@interface MTRMessagesClusterMessageQueuedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *messageID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
