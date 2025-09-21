@class NSString, NSArray;

@interface FBKQuestionGroupStub : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *questionAnswerPairs;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJSONObject:(id)a0;
- (id)initWithTitle:(id)a0 questions:(id)a1;
- (char)setPropertiesFromJSONObject:(id)a0;

@end
