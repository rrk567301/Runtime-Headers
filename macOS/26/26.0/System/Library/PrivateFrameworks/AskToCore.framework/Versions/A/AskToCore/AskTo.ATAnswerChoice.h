@class NSString;

@interface AskTo.ATAnswerChoice : NSObject <NSSecureCoding> {
    void /* function */ id;
    void /* function */ title;
    void /* function */ completedRequestTitle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *completedRequestTitle;
@property (nonatomic) short kind;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 title:(id)a1;
- (id)initWithId:(id)a0 title:(id)a1 completedRequestTitle:(id)a2;

@end
