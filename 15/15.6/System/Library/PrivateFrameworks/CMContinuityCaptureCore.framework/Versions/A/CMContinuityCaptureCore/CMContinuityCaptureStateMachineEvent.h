@class NSString, NSDictionary;

@interface CMContinuityCaptureStateMachineEvent : NSObject

@property (readonly, retain) NSString *name;
@property (readonly) char isEntry;
@property (readonly) id /* block */ action;
@property (retain) NSDictionary *data;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 isEntry:(char)a1 eventAction:(id /* block */)a2;

@end
