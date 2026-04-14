@protocol CNContactPosterUnifiedContactIdentifierExpansion;

@interface _RequestRewriter : NSObject {
    id<CNContactPosterUnifiedContactIdentifierExpansion> _expander;
}

- (void).cxx_destruct;
- (id)initWithExpander:(id)a0;
- (id)rewriteCreateRequest:(id)a0;
- (id)rewriteDeleteRequest:(id)a0;
- (id)rewriteFetchRequest:(id)a0;
- (id)rewriteUpdateRequest:(id)a0;

@end
