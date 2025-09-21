@class ICNFIMAPMailbox;

@interface ICNFIMAPClientSelectOperation : ICNFIMAPClientMailboxOperation {
    char _delayed;
}

@property (retain) ICNFIMAPMailbox *imapMailbox;
@property char useCondStore;
@property char delayed;
@property (readonly) char readOnly;

+ (char)automaticallyNotifiesObserversOfDelayed;

- (void).cxx_destruct;
- (char)isReady;
- (id)activityString;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (char)handlesAllUntaggedResponses;
- (id)newCommandDataForLiteralPlus:(char)a0;

@end
