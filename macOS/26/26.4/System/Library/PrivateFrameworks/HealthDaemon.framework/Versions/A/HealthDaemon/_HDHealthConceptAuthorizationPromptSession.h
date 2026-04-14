@class NSString, HDProfile, NSUUID, NSMutableArray;

@interface _HDHealthConceptAuthorizationPromptSession : NSObject {
    HDProfile *_profile;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    BOOL _didStartTransaction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _sessionCompletion;
    NSString *_bundleIdentifier;
    NSUUID *_sessionIdentifier;
}

- (void).cxx_destruct;

@end
