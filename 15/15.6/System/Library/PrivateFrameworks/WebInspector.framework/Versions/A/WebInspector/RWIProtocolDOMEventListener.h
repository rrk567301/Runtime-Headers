@class NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject

@property (nonatomic) int eventListenerId;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) char useCapture;
@property (nonatomic) char isAttribute;
@property (nonatomic) int nodeId;
@property (nonatomic) char onWindow;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSString *handlerName;
@property (nonatomic) char passive;
@property (nonatomic) char once;
@property (nonatomic) char disabled;
@property (nonatomic) char hasBreakpoint;

- (id)initWithEventListenerId:(int)a0 type:(id)a1 useCapture:(char)a2 isAttribute:(char)a3;

@end
