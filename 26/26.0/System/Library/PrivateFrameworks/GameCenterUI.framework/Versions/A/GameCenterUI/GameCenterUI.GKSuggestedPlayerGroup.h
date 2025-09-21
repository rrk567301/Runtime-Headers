@class NSArray, NSString;

@interface GameCenterUI.GKSuggestedPlayerGroup : NSObject {
    void /* function */ players;
    void /* function */ groupName;
    void /* function */ messagesGroupIdentifier;
    void /* function */ conversationIdentifier;
}

@property (nonatomic, copy) NSArray *players;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *messagesGroupIdentifier;
@property (nonatomic) long long source;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, readonly) BOOL fromPeopleSuggester;
@property (nonatomic, readonly) BOOL isNearby;

- (id)init;
- (void).cxx_destruct;

@end
