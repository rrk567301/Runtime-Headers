@class NSString;

@interface _MPCToggleTransitionsCommand : _MPCPlayerCommand <MPCToggleTransitionsCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toggleTransitions;

@end
