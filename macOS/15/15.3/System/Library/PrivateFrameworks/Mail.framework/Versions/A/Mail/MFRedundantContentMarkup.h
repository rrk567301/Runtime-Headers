@class MCMessageBody, NSString, MCMessage;

@interface MFRedundantContentMarkup : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) MCMessage *message;
@property (readonly, nonatomic) MCMessageBody *messageBody;
@property (readonly, nonatomic) MCMessage *ancestorUsedForComparison;
@property (readonly, copy, nonatomic) NSString *messageBodyWithRedundantTextMarkers;
@property (readonly, copy, nonatomic) NSString *redundantContentSenderName;
@property (readonly, nonatomic) BOOL matchedEntireAncestorContiguously;
@property (readonly, nonatomic) BOOL messageContainsRedundantText;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 messageBody:(id)a1 ancestorUsedForComparison:(id)a2 messageBodyWithRedundantTextMarkers:(id)a3 messageContainsRedundantText:(BOOL)a4 matchedEntireAncestorContiguously:(BOOL)a5;

@end
