@class NSString, _TtC5AskTo10ATQuestion, _TtC5AskTo14ATAnswerChoice;

@interface AskToCore.ATResponse : NSObject <NSCopying, NSSecureCoding> {
    void /* function */ responderHandle;
    void /* unknown type, empty encoding */ displayNameContactFormatter;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) _TtC5AskTo10ATQuestion *originalQuestion;
@property (nonatomic, copy) NSString *responderHandle;
@property (nonatomic, readonly) _TtC5AskTo14ATAnswerChoice *chosenAnswer;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
