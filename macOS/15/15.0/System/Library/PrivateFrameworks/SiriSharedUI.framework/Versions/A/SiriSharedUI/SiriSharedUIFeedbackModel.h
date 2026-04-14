@class NSData, NSString;

@interface SiriSharedUIFeedbackModel : NSObject

@property (retain, nonatomic) NSData *imageRepresentationOfSnippet;
@property (nonatomic) long long feedbackDomain;
@property (retain, nonatomic) NSString *userInput;
@property (retain, nonatomic) NSString *siriDialog;

- (void).cxx_destruct;

@end
