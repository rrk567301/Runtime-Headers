@class NSString;

@interface TLTransliteratorCandidate : NSObject <NSCopying>

@property (readonly, copy) NSString *inputWord;
@property (readonly, copy) NSString *transliteratedWord;
@property (readonly) double lmScore;
@property (readonly) double seq2seqScore;
@property (readonly) BOOL isExtensionCandidate;
@property (readonly) long long type;

+ (id)createWithCompositeTransliteratorCandidate:(const void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithInputWord:(id)a0 transliteratedWord:(id)a1 lmScore:(double)a2 seq2seqScore:(double)a3 isExtensionCandidate:(BOOL)a4 type:(long long)a5;

@end
