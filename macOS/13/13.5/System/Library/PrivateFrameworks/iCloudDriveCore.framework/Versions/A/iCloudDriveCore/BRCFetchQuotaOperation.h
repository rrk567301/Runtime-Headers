@class NSString;

@interface BRCFetchQuotaOperation : _BRCOperation <BRCOperationSubclass>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)initWithSession:(id)a0;
- (BOOL)shouldRetryForError:(id)a0;

@end
