@class NSString;

@interface _MPCVideoControlsCommand : _MPCPlayerCommand <MPCPlayerVideoControlsCommand>

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setVideoEnabled:(BOOL)a0;
- (id)setVideoEnabled:(BOOL)a0 reason:(long long)a1;

@end
