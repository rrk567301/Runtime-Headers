@class NSString;

@interface EDSearchableMessage : NSObject {
    void /* unknown type, empty encoding */ _underlying;
}

@property (class, nonatomic, readonly) NSString *userHandle;

+ (id)peopleFromCommentedAddresses:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addToAttributes:(id)a0 forIdentifier:(id)a1;
- (id)initWithSubjectWithoutPrefix:(id)a0 dateSent:(id)a1 dateReceived:(id)a2 isEncrypted:(char)a3 priority:(id)a4 senders:(id)a5 to:(id)a6 cc:(id)a7 bcc:(id)a8 allHeaders:(id)a9 htmlContent:(id)a10 messageID:(id)a11 messageIDHeader:(id)a12 notificationID:(id)a13 isPartOfExistingThread:(char)a14 hasCompleteData:(char)a15 accountIdentifier:(id)a16 accountIsManaged:(char)a17 accountType:(id)a18 accountEmailAddresses:(id)a19 update:(id)a20 attachments:(id)a21 category:(id)a22;

@end
