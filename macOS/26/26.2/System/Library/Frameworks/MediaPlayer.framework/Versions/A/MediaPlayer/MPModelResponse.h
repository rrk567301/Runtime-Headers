@class MPSectionedCollection, MPModelRequest;

@interface MPModelResponse : NSObject

@property (copy, nonatomic) MPSectionedCollection *results;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) MPModelRequest *request;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)initWithRequest:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)_invalidate;
- (void)getChangeDetailsFromPreviousResponse:(id)a0 completion:(id /* block */)a1;

@end
