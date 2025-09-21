@class NSData;

@interface MTRMessagesClusterMessagePresentedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *messageID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
