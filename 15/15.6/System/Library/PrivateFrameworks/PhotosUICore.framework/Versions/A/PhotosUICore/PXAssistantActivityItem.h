@interface PXAssistantActivityItem : PXObservable

@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) double progress;

- (id)init;

@end
