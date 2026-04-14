@class NSString;

@interface EDSearchableMessage : NSObject {
    void /* unknown type, empty encoding */ _underlying;
}

@property (class, nonatomic, readonly) NSString *userHandle;

+ (id)peopleFromCommentedAddresses:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addToAttributes:(id)a0 forIdentifier:(id)a1;
- (id)initWithSubjectWithoutPrefix:(id)a0 dateSent:(id)a1 dateReceived:(id)a2 isEncrypted:(BOOL)a3 priority:(id)a4 senders:(id)a5 to:(id)a6 cc:(id)a7 bcc:(id)a8 allHeaders:(id)a9 htmlContent:(id)a10 summary:(id)a11 messageID:(id)a12 messageIDHeader:(id)a13 notificationID:(id)a14 isPartOfExistingThread:(BOOL)a15 hasCompleteData:(BOOL)a16 accountIdentifier:(id)a17 accountIsManaged:(BOOL)a18 accountType:(id)a19 accountEmailAddresses:(id)a20 update:(id)a21 attachments:(id)a22 category:(id)a23;

@end
