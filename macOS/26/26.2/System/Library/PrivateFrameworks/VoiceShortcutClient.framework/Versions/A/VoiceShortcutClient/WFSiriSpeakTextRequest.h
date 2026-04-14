@class NSString;

@interface WFSiriSpeakTextRequest : WFSiriActionRequest

@property (readonly, copy, nonatomic) NSString *utterance;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUtterance:(id)a0;

@end
