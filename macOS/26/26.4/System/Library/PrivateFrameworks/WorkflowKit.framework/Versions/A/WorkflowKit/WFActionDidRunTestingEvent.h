@class NSError, WFContentCollection;

@interface WFActionDidRunTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) WFContentCollection *output;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAction:(id)a0 output:(id)a1 error:(id)a2;

@end
