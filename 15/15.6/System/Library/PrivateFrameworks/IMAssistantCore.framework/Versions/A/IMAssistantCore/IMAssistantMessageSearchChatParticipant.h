@class NSString, NSArray;

@interface IMAssistantMessageSearchChatParticipant : NSObject

@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) char isMe;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 contactIdentifiers:(id)a1 isMe:(char)a2;
- (char)matchesPerson:(id)a0 withUnifiedContactIdentifiers:(id)a1;

@end
