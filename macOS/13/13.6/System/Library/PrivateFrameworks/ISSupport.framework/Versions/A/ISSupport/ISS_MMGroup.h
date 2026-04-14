@class NSString;

@interface ISS_MMGroup : NSObject <ISS_MMPrincipal, ISS_MMTransactionGenerator> {
    NSString *_name;
    id _owner;
    id _delegate;
    BOOL _use_synchronous;
    NSString *_principalID;
}

+ (id)groupWithName:(id)a0 andOwner:(id)a1;
+ (id)principalIDWithName:(id)a0 andOwner:(id)a1;

- (void)dealloc;
- (id)name;
- (void)setName:(id)a0;
- (id)members;
- (id)owner;
- (BOOL)isSynchronous;
- (void)setIsSynchronous:(BOOL)a0;
- (id)addMembers:(id)a0;
- (id)removeMembers:(id)a0;
- (id)ownerAccount;
- (id)initWithName:(id)a0 andOwner:(id)a1;
- (id)principalID;
- (void)setOwnerAccount:(id)a0;
- (void)setTransactionDelegate:(id)a0;
- (id)transactionDelegate;

@end
