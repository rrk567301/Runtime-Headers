@interface CNKCallParticipantLabelDescriptorFactory : NSObject

@property (nonatomic, copy) id /* block */ organizationNameProvider;

- (id)init;
- (id)labelDescriptorWithStringsForCall:(id)a0 callCount:(long long)a1 alertAvailable:(char)a2 allowsDuration:(char)a3;
- (id)labelDescriptorWithStringsForCall:(id)a0 callCount:(long long)a1 callCenter:(id)a2 alertAvailable:(char)a3 allowsDuration:(char)a4;
- (id)makeLabel;
- (id)makeLabelWithString:(id)a0;
- (id)makeLabelWithString:(id)a0 secondaryString:(id)a1 layoutState:(long long)a2;

@end
