@class NSString, NSDictionary, NSURL, NSObject, NSWindow;

@interface NSTitlebarRenamingSessionBase : NSObject <NSTitlebarPopoverViewControllerDataSource, NSDocumentTitlebarPopoverViewControllerDelegate, NSPopoverDelegate> {
    NSWindow *_window;
    NSString *_editingTitle;
}

@property (copy) id /* block */ completionHandler;
@property char extensionHidden;
@property char isDuplicate;
@property long long documentUniquingNumber;
@property (readonly) char ended;
@property (readonly) char titleWasChosenAutomatically;
@property (readonly) NSString *userEditedDisplayName;
@property (readonly) NSURL *finalURL;
@property struct _NSRange { unsigned long long location; unsigned long long length; } editingRange;
@property (copy) NSString *documentUTI;
@property (copy) NSString *fallbackExtension;
@property (copy) NSString *startDisplayName;
@property (copy) NSURL *alternateDirectory;
@property (copy) NSURL *originalURL;
@property (readonly) NSDictionary *initialViewBridgeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject *objectToObserveForLockStatus;
@property (readonly) NSString *keyPathToObserveForLockStatus;
@property (readonly) NSDictionary *latestViewBridgeInfo;

- (void).cxx_destruct;
- (void)setTitleWasChosenAutomatically:(char)a0;
- (char)documentIsLocked;
- (void)handleSelectOtherLocationForDocumentWithCompletionHandler:(id /* block */)a0;
- (void)handleSetDocumentLockStatus:(char)a0 completionHandler:(id /* block */)a1;
- (void)handleSetDocumentTags:(id)a0 completionHandler:(id /* block */)a1;
- (void)locallyMoveDocumentToURL:(id)a0 extension:(id)a1 tagNames:(id)a2 extensionHidden:(char)a3 saveAsDraft:(char)a4 completionHandler:(id /* block */)a5;
- (void)setFinalURL:(id)a0;

@end
