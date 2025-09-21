@class NSString;

@interface WFSiriSpeakTextRequest : WFSiriActionRequest

@property (readonly, copy, nonatomic) NSString *utterance;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUtterance:(id)a0;

@end
