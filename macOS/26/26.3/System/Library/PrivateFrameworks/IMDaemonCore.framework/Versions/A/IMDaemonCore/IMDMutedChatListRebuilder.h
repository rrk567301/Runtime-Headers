@interface IMDMutedChatListRebuilder : NSObject {
    void /* unknown type, empty encoding */ findChat;
    void /* unknown type, empty encoding */ mutedChatList;
    void /* unknown type, empty encoding */ muteChat;
    void /* unknown type, empty encoding */ muteIdentifiers;
    void /* unknown type, empty encoding */ batchLimit;
    void /* unknown type, empty encoding */ identifiersFound;
    void /* unknown type, empty encoding */ chatsFound;
    void /* unknown type, empty encoding */ state;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBatchLimit:(long long)a0 findChat:(id /* block */)a1 mutedChatList:(id /* block */)a2 muteChat:(id /* block */)a3 muteIdentifiers:(id /* block */)a4;
- (void)rebuildMutedChatList;

@end
