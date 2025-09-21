@class NSString;

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying>

@property (nonatomic) int pid;
@property (nonatomic) long long taskState;
@property (nonatomic) long long visibility;
@property (nonatomic, getter=isDebugging) char debugging;
@property (readonly, nonatomic, getter=isRunning) char running;
@property (readonly, nonatomic, getter=isForeground) char foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithPid:(int)a0;

@end
