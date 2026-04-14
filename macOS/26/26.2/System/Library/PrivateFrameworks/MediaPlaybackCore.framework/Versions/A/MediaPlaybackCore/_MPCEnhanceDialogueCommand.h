@class NSString;

@interface _MPCEnhanceDialogueCommand : _MPCPlayerCommand <MPCEnhanceDialogueCommand>

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activate:(BOOL)a0;

@end
