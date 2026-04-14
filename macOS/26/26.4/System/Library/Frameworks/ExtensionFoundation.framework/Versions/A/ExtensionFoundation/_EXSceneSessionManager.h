@class NSMutableDictionary;

@interface _EXSceneSessionManager : NSObject

@property (readonly) NSMutableDictionary *_sessions;

+ (id)sharedInstance;

- (id)_init;
- (void)removeSessionForIdentifier:(id)a0;
- (id)sessionForIdentifier:(id)a0;
- (id)sessions;
- (void).cxx_destruct;
- (void)addSession:(id)a0;

@end
