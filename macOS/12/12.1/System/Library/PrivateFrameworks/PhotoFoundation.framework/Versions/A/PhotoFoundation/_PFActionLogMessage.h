@class NSString;

@interface _PFActionLogMessage : _PFActionLogEvent

@property (readonly) NSString *message;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0 message:(id)a1;
- (id)initWithEventLog:(id)a0 message:(id)a1;

@end
