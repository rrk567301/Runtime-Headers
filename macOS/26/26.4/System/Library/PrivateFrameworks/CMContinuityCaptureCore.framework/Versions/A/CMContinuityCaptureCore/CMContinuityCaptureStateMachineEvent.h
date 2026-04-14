@class NSString, NSDictionary;

@interface CMContinuityCaptureStateMachineEvent : NSObject

@property (readonly, retain) NSString *name;
@property (readonly) BOOL isEntry;
@property (readonly) id /* block */ action;
@property (retain) NSDictionary *data;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 isEntry:(BOOL)a1 eventAction:(id /* block */)a2;

@end
