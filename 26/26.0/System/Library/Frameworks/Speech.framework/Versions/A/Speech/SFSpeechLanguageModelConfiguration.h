@class NSURL, NSNumber;

@interface SFSpeechLanguageModelConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *languageModel;
@property (readonly, copy, nonatomic) NSURL *vocabulary;
@property (readonly, copy, nonatomic) NSNumber *weight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLanguageModel:(id)a0;
- (id)initWithLanguageModel:(id)a0 vocabulary:(id)a1;
- (id)initWithLanguageModel:(id)a0 vocabulary:(id)a1 weight:(id)a2;

@end
