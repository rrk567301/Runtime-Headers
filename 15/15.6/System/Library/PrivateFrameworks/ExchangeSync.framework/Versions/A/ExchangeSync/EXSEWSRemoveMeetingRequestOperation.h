@class NSArray;

@interface EXSEWSRemoveMeetingRequestOperation : EXSEWSOperation

@property (retain, nonatomic) NSArray *responseMessages;
@property (readonly) char responseMessagesSet;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (char)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
