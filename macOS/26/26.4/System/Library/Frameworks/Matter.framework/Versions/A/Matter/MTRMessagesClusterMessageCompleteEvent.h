@class NSData, NSNumber, NSString;

@interface MTRMessagesClusterMessageCompleteEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *messageID;
@property (copy, nonatomic) NSNumber *responseID;
@property (copy, nonatomic) NSString *reply;
@property (copy, nonatomic) NSNumber *futureMessagesPreference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
