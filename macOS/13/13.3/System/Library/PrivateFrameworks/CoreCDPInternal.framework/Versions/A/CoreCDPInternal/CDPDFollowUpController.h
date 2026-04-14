@class NSString, CDPDFollowUpFactory, FLFollowUpController;

@interface CDPDFollowUpController : NSObject <CDPDAuthListener> {
    FLFollowUpController *_followUpController;
    CDPDFollowUpFactory *_followUpFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)informativeText;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (void)securityLevelChanged:(BOOL)a0 forAltDSID:(id)a1;
- (id)_followUpControllerForContext:(id)a0;
- (BOOL)postFollowUpItemForContext:(id)a0 error:(id *)a1;

@end
