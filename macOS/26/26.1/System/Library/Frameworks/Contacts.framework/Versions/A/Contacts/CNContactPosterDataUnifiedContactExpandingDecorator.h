@class _RequestRewriter, NSString;
@protocol CNContactPosterDataStore, CNContactPosterUnifiedContactIdentifierExpansion;

@interface CNContactPosterDataUnifiedContactExpandingDecorator : NSObject <CNContactPosterDataStore>

@property (readonly) id<CNContactPosterDataStore> store;
@property (readonly) id<CNContactPosterUnifiedContactIdentifierExpansion> expander;
@property (readonly) _RequestRewriter *requestRewriter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)executeCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteRequest:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateRequest:(id)a0 error:(id *)a1;
- (id)initWithPosterDataStore:(id)a0;
- (id)initWithPosterDataStore:(id)a0 contactStore:(id)a1;
- (id)initWithPosterDataStore:(id)a0 identifierExpander:(id)a1;

@end
