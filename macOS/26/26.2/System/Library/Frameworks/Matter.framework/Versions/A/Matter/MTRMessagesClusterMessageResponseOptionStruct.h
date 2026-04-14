@class NSNumber, NSString;

@interface MTRMessagesClusterMessageResponseOptionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *messageResponseID;
@property (copy, nonatomic) NSString *label;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
