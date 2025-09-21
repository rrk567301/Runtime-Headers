@class MOSettingsPublisherBase;

@interface MOEffectivePublisher : MOPublisher

@property (readonly, nonatomic) MOSettingsPublisherBase *base;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)sinkWithReceiveInput:(id /* block */)a0;
- (id)initWithInterestedGroups:(id)a0 subscriptionCenter:(id)a1;
- (id)sinkWithRecieveInput:(id /* block */)a0;

@end
