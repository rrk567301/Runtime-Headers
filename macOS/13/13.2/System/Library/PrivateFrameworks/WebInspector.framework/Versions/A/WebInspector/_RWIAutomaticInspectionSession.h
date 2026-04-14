@class NSString, NSArray, NSNumber;

@interface _RWIAutomaticInspectionSession : NSObject {
    NSNumber *_pageId;
    NSString *_applicationIdentifier;
    unsigned long long _currentDebuggerIndex;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *debuggers;

- (void).cxx_destruct;
- (void)start;
- (id)initWithPageId:(id)a0 applicationIdentifier:(id)a1 debuggers:(id)a2;
- (BOOL)receivedRejectResponse;
- (void)_sendQuery;
- (BOOL)matchesPageId:(id)a0 applicationIdentifier:(id)a1;

@end
