@class NSString;

@interface EDSearchableMessage : NSObject {
    void /* unknown type, empty encoding */ _underlying;
}

@property (class, nonatomic, readonly) NSString *userHandle;

+ (id)peopleFromCommentedAddresses:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addToAttributes:(id)a0 forIdentifier:(id)a1;
- (id)initWithSubjectWithoutPrefix:(id)a0 dateSent:(id)a1 dateReceived:(id)a2 isEncrypted:(BOOL)a3 priority:(id)a4 senders:(id)a5 to:(id)a6 cc:(id)a7 bcc:(id)a8 allHeaders:(id)a9 htmlContent:(id)a10 messageID:(id)a11 notificationID:(id)a12 isPartOfExistingThread:(BOOL)a13 hasCompleteData:(BOOL)a14 accountIdentifier:(id)a15 accountIsManaged:(BOOL)a16 accountType:(id)a17 accountEmailAddresses:(id)a18 update:(id)a19 attachments:(id)a20;

@end
