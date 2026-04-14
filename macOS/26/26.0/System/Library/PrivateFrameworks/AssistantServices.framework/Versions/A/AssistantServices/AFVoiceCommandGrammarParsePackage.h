@class NSArray;

@interface AFVoiceCommandGrammarParsePackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *nBestParses;
@property (readonly, copy, nonatomic) NSArray *preITNNBestParses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNBestParses:(id)a0 preITNNBestParses:(id)a1;

@end
