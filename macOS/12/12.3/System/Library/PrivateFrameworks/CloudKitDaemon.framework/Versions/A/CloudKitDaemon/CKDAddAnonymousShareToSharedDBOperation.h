@class NSDictionary;

@interface CKDAddAnonymousShareToSharedDBOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

- (void).cxx_destruct;
- (int)operationType;
- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)_addAnonymousSharesToSharedDB;

@end
