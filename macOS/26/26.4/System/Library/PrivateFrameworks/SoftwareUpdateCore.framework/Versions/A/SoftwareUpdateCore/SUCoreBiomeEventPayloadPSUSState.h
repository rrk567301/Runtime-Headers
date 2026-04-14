@class NSArray;

@interface SUCoreBiomeEventPayloadPSUSState : SUCoreBiomeEventPayloadBase

@property (nonatomic) long long updateType;
@property (nonatomic) long long psusOpType;
@property (retain, nonatomic) NSArray *errors;

- (void).cxx_destruct;
- (id)init;

@end
