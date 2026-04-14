@class NSString;
@protocol CNContactPosterDataXPCConnectionFactory;

@interface CNContactPosterDataXPCAccess : NSObject <CNContactPosterDataStore>

@property (readonly) id<CNContactPosterDataXPCConnectionFactory> connectionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)initWithConnectionFactory:(id)a0;
- (long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)init;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)executeCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteRequest:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateRequest:(id)a0 error:(id *)a1;
- (void)performWithService:(id /* block */)a0;

@end
