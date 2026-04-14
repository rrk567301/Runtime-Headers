@class NSString;

@interface TTKConversationMessage : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *senderId;

+ (id)messageWithText:(id)a0 senderId:(id)a1;
+ (id)fromJsonDict:(id)a0;

- (void).cxx_destruct;
- (id)toJsonDict;

@end
