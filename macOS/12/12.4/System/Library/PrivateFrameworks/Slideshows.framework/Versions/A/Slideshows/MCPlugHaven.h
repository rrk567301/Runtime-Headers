@class NSString, MCContainerNavigator, MCAction;

@interface MCPlugHaven : MCPlug

@property (copy, getter=idInSupercontainer, setter=setIDInSupercontainer:) NSString *idInSupercontainer;
@property MCContainerNavigator *supercontainer;
@property (retain, nonatomic) MCAction *actionOnCompletion;

- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;

@end
