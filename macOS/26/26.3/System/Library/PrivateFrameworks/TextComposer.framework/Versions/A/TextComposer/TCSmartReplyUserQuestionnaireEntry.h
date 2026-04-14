@class NSString, NSOrderedSet, NSArray;

@interface TCSmartReplyUserQuestionnaireEntry : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_answerOptionsArray;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *question;
@property (readonly, copy, nonatomic) NSOrderedSet *answerOptions;
@property (readonly, copy, nonatomic) NSString *selectedOption;
@property (readonly, copy, nonatomic) NSString *defaultOption;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAnswerOptions:(id)a0 question:(id)a1 selectedOption:(id)a2 defaultOption:(id)a3;
- (id)initWithAnswerOptionsArray:(id)a0 question:(id)a1 selectedOption:(id)a2 defaultOption:(id)a3;

@end
