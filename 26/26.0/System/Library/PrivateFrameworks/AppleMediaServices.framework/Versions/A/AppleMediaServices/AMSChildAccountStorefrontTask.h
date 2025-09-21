@class NSNumber, ACAccount;
@protocol AMSBagProtocol;

@interface AMSChildAccountStorefrontTask : AMSTask

@property (nonatomic, readonly) ACAccount *parentAccount;
@property (nonatomic, readonly) NSNumber *childDSID;
@property (nonatomic, readonly) id<AMSBagProtocol> bag;
@property (nonatomic, weak) void /* function */ delegate;

- (id)init;
- (id)perform;
- (void).cxx_destruct;
- (id)initWithParentAccount:(id)a0 childDSID:(id)a1 bag:(id)a2;

@end
