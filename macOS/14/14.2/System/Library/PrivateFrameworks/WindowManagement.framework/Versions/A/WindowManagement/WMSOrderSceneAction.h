@class NSString;

@interface WMSOrderSceneAction : BSAction

@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, readonly) long long relativePosition;
@property (nonatomic, readonly) NSString *otherSceneIdentifier;
@property (nonatomic, readonly) unsigned int otherCGWindowID;
@property (nonatomic, readonly) long long preferredPresentationStyle;
@property (nonatomic, readonly) NSString *requestingSceneIdentifier;
@property (nonatomic, readonly) unsigned long long conditionalEventTime;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0 responder:(id)a1;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 relativePosition:(long long)a1 otherSceneIdentifier:(id)a2 otherCGWindowID:(unsigned int)a3 preferredPresentationStyle:(long long)a4 requestingSceneIdentifier:(id)a5 conditionalEventTime:(unsigned long long)a6 responder:(id)a7;

@end
