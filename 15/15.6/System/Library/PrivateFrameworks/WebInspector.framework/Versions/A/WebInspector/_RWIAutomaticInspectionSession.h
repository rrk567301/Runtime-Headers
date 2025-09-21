@class NSString, NSArray, NSNumber;

@interface _RWIAutomaticInspectionSession : NSObject {
    NSNumber *_pageId;
    NSString *_applicationIdentifier;
    int _applicationPID;
    unsigned long long _currentDebuggerIndex;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *debuggers;

- (void).cxx_destruct;
- (void)start;
- (void)_sendQuery;
- (id)initWithPageId:(id)a0 applicationIdentifier:(id)a1 applicationPID:(int)a2 debuggers:(id)a3;
- (char)matchesPageId:(id)a0 applicationIdentifier:(id)a1;
- (char)receivedRejectResponse;

@end
