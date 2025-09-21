@class NSArray, NSSet;

@interface TTKConversationTest : NSObject

@property (readonly, nonatomic) NSArray *conversation;
@property (readonly, nonatomic) NSSet *sendersToTest;
@property (readonly, nonatomic) unsigned long long warmupMessages;
@property (readonly, nonatomic) char adaptToSentMessages;
@property (readonly, nonatomic) char adaptToReceivedMessages;

+ (id)fromJsonDict:(id)a0;
+ (id)testWithConversation:(id)a0 sendersToTest:(id)a1 warmupMessages:(unsigned long long)a2 adaptToSentMessages:(char)a3 adaptToReceivedMessages:(char)a4;

- (void).cxx_destruct;
- (id)overridingJsonKeys:(id)a0;
- (id)toJsonDict;

@end
