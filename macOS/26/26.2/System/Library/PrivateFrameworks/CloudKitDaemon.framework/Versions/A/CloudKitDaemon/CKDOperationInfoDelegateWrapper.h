@class CKPersona;
@protocol CKDOperationInfoDelegate;

@interface CKDOperationInfoDelegateWrapper : NSObject

@property (weak, nonatomic) id<CKDOperationInfoDelegate> delegate;
@property (copy, nonatomic) CKPersona *persona;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)performWithDelegate:(id /* block */)a0;

@end
