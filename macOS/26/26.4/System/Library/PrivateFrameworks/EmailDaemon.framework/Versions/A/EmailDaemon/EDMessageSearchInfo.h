@class NSDictionary, EMInstantAnswer;

@interface EDMessageSearchInfo : NSObject

@property (readonly, nonatomic) EMInstantAnswer *instantAnswer;
@property (readonly, copy, nonatomic) NSDictionary *snippetsByObjectID;
@property (readonly, copy, nonatomic) NSDictionary *snippetMessageObjectIDsByConversation;

+ (id)searchInfoWithInstantAnswer:(id)a0 snippetsByObjectID:(id)a1 snippetMessageObjectIDsByConversation:(id)a2;

- (void).cxx_destruct;
- (id)initWithInstantAnswer:(id)a0 snippetsByObjectID:(id)a1 snippetMessageObjectIDsByConversation:(id)a2;

@end
