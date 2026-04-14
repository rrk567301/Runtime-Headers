@class NSString, TCSmartRepliesResponse, NSError, NSNumber;

@interface TextInputUI.TUISmartReplyResponse : NSObject {
    void /* function */ threadIdentifier;
    void /* function */ modelInfoString;
    void /* function */ userFeedbackInputString;
}

@property (nonatomic, retain) TCSmartRepliesResponse *srResponse;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic) long long type;
@property (nonatomic) long long contentWarning;
@property (nonatomic, copy) NSString *modelInfoString;
@property (nonatomic, copy) NSString *userFeedbackInputString;
@property (nonatomic, retain) NSNumber *responseFromCache;
@property (nonatomic, retain) NSNumber *modelPromptTokenCount;
@property (nonatomic, retain) NSNumber *modelOutputTokenCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSrResponse:(id)a0 threadIdentifier:(id)a1 type:(long long)a2 contentWarning:(long long)a3 error:(id)a4 modelInfoString:(id)a5 userFeedbackInputString:(id)a6 responseFromCache:(id)a7 modelPromptTokenCount:(id)a8 modelOutputTokenCount:(id)a9;
- (void)printValues;

@end
