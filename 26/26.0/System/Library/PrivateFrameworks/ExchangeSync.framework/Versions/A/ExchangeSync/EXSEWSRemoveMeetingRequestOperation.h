@class NSArray;

@interface EXSEWSRemoveMeetingRequestOperation : EXSEWSOperation

@property (retain, nonatomic) NSArray *responseMessages;
@property (readonly) BOOL responseMessagesSet;

- (id)initWithProtocol:(id)a0;
- (void).cxx_destruct;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
