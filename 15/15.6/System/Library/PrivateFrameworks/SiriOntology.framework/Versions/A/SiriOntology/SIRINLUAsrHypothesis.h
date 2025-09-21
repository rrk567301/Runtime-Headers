@class NSString, NSArray, NSUUID;

@interface SIRINLUAsrHypothesis : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *utterance;
@property (nonatomic) double probability;
@property (retain, nonatomic) NSArray *asrTokens;
@property (retain, nonatomic) NSUUID *uuid;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUtterance:(id)a0 probability:(double)a1 asrTokens:(id)a2 uuid:(id)a3;
- (id)initWithUtterance:(id)a0 probability:(double)a1 uuid:(id)a2;

@end
