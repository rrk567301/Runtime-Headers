@protocol SGSuggestionsServiceContactsProtocol;

@interface SRSmartRepliesContactCaptionProvider : NSObject

@property (class, readonly, nonatomic) id<SGSuggestionsServiceContactsProtocol> sharedService;

+ (id)newestSuggestedContactForDestinationID:(id)a0;
+ (void)suggestedNamesForDestinationID:(id)a0 onlySignificant:(char)a1 withCompletion:(id /* block */)a2;

@end
