@class NSString, NSMutableArray;

@interface CNContactPosterDataChangeRequestClassifier : NSObject <CNContactPosterDataChangeRequestVisitor>

@property (readonly) NSMutableArray *createRequests;
@property (readonly) NSMutableArray *updateRequests;
@property (readonly) NSMutableArray *deleteRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classifyRequests:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)visitCreateRequest:(id)a0;
- (void)visitDeleteRequest:(id)a0;
- (void)visitUpdateRequest:(id)a0;

@end
