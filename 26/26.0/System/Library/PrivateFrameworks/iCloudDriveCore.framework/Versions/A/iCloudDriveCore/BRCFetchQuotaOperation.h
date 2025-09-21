@class NSString;

@interface BRCFetchQuotaOperation : _BRCOperation <BRCOperationSubclass>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (id)initWithSessionContext:(id)a0;

@end
