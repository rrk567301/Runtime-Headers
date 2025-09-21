@class NSString;

@interface TLTransliteratorCandidate : NSObject <NSCopying>

@property (readonly, copy) NSString *inputWord;
@property (readonly, copy) NSString *transliteratedWord;
@property (readonly) double lmScore;
@property (readonly) double seq2seqScore;
@property (readonly) char isExtensionCandidate;
@property (readonly) long long type;

+ (id)createWithCompositeTransliteratorCandidate:(const void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInputWord:(id)a0 transliteratedWord:(id)a1 lmScore:(double)a2 seq2seqScore:(double)a3 isExtensionCandidate:(char)a4 type:(long long)a5;

@end
