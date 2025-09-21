@class NSString;
@protocol _CRKSendMessageCardFactoryDelegate;

@interface _CRKSendMessageCardFactory : NSObject <CRSCardServing, CRSIdentifiedServing>

@property (weak, nonatomic) id<_CRKSendMessageCardFactoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)buildCardForContent:(id)a0 completion:(id /* block */)a1;
- (char)canSatisfyCardRequest:(id)a0;
- (void)requestCard:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)servicePriorityForRequest:(id)a0;

@end
