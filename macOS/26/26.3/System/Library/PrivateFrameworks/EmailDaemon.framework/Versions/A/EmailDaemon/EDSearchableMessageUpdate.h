@interface EDSearchableMessageUpdate : NSObject {
    void /* unknown type, empty encoding */ _underlying;
}

- (id)init;
- (void).cxx_destruct;
- (void)addToAttributes:(id)a0 forIdentifier:(id)a1;
- (id)initWithConversationIdentifier:(id)a0 mailboxIdentifiers:(id)a1 gmailLabels:(id)a2 isLikelyJunk:(id)a3 dateLastViewed:(id)a4 flags:(id)a5 authenticationState:(id)a6 messageID:(id)a7 messageIDHeader:(id)a8 subjectWithoutPrefix:(id)a9;

@end
