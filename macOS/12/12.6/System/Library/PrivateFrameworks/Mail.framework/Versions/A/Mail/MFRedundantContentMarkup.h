@class MCMessageBody, NSString, MCMessage;

@interface MFRedundantContentMarkup : NSObject

@property (readonly, nonatomic) MCMessage *message;
@property (readonly, nonatomic) MCMessageBody *messageBody;
@property (readonly, nonatomic) MCMessage *ancestorUsedForComparison;
@property (readonly, copy, nonatomic) NSString *messageBodyWithRedundantTextMarkers;
@property (readonly, copy, nonatomic) NSString *redundantContentSenderName;
@property (readonly, nonatomic) BOOL matchedEntireAncestorContiguously;
@property (readonly, nonatomic) BOOL messageContainsRedundantText;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 messageBody:(id)a1 ancestorUsedForComparison:(id)a2 messageBodyWithRedundantTextMarkers:(id)a3 messageContainsRedundantText:(BOOL)a4 matchedEntireAncestorContiguously:(BOOL)a5;

@end
