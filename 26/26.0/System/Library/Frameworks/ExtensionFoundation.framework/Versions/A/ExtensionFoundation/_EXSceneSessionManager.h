@class NSMutableDictionary;

@interface _EXSceneSessionManager : NSObject

@property (readonly) NSMutableDictionary *_sessions;

+ (id)sharedInstance;

- (id)_init;
- (id)sessions;
- (id)sessionForIdentifier:(id)a0;
- (void)removeSessionForIdentifier:(id)a0;
- (void)addSession:(id)a0;
- (void).cxx_destruct;

@end
