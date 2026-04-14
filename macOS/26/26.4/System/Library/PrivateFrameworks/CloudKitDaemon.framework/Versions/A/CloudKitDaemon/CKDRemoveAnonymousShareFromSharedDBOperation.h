@class NSDictionary;

@interface CKDRemoveAnonymousShareFromSharedDBOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove;
@property (copy, nonatomic) id /* block */ anonymousShareRemovedBlock;

+ (id)nameForState:(unsigned long long)a0;

- (int)operationType;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (BOOL)makeStateTransition;
- (void).cxx_destruct;
- (void)_removeAnonymousShareFromSharedDB;

@end
