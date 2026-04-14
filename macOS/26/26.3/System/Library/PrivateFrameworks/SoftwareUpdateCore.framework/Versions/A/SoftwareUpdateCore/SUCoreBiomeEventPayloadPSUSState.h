@class NSArray;

@interface SUCoreBiomeEventPayloadPSUSState : SUCoreBiomeEventPayloadBase

@property (nonatomic) long long updateType;
@property (nonatomic) long long psusOpType;
@property (retain, nonatomic) NSArray *errors;

- (id)init;
- (void).cxx_destruct;

@end
