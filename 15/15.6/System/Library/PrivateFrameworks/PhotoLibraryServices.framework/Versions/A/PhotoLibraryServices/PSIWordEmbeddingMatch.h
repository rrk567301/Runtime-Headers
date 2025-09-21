@class NSString;

@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *word;
@property (readonly) NSString *extendedWord;
@property (readonly) double score;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWord:(id)a0 extendedWord:(id)a1 score:(double)a2;

@end
