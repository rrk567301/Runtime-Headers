@class NSData, NSString;

@interface SiriSharedUIFeedbackModel : NSObject

@property (retain, nonatomic) NSData *imageRepresentationOfSnippet;
@property (retain, nonatomic) NSData *imageRepresentationOfRequestImage;
@property (nonatomic) long long feedbackDomain;
@property (retain, nonatomic) NSString *userInput;
@property (retain, nonatomic) NSString *siriDialog;
@property (retain, nonatomic) NSString *siriSuggestionText;
@property (retain, nonatomic) NSString *subFeature;
@property (retain, nonatomic) NSString *diagnosticContent;

- (void).cxx_destruct;

@end
