@class CKPersona;
@protocol CKDOperationInfoDelegate;

@interface CKDOperationInfoDelegateWrapper : NSObject

@property (weak, nonatomic) id<CKDOperationInfoDelegate> delegate;
@property (copy, nonatomic) CKPersona *persona;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)performWithDelegate:(id /* block */)a0;

@end
