@class ICNFIMAPMailbox;

@interface ICNFIMAPClientSelectOperation : ICNFIMAPClientMailboxOperation {
    BOOL _delayed;
}

@property (retain) ICNFIMAPMailbox *imapMailbox;
@property BOOL useCondStore;
@property BOOL delayed;
@property (readonly) BOOL readOnly;

+ (BOOL)automaticallyNotifiesObserversOfDelayed;

- (BOOL)isReady;
- (id)activityString;
- (void).cxx_destruct;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (BOOL)handlesAllUntaggedResponses;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
