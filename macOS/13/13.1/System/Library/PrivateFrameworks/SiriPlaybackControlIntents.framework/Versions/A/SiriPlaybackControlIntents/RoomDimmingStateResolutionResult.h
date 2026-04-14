@interface RoomDimmingStateResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedRoomDimmingState:(long long)a0;
+ (id)confirmationRequiredWithRoomDimmingStateToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
