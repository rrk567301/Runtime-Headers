@class NSURL, NSString;

@interface EDSearchableAttachment : NSObject {
    void /* unknown type, empty encoding */ _underlying;
}

@property (nonatomic, readonly) NSURL *contentURL;
@property (nonatomic, readonly) NSString *displayName;

- (void).cxx_destruct;
- (id)init;
- (void)addToAttributes:(id)a0;
- (id)initWithContentURL:(id)a0 contentType:(id)a1 name:(id)a2 accountIdentifier:(id)a3 mailboxIdentifiers:(id)a4 messageID:(id)a5 messageIDHeader:(id)a6 dateSent:(id)a7 dateReceived:(id)a8 sender:(id)a9 recipients:(id)a10 downloadDate:(id)a11;

@end
