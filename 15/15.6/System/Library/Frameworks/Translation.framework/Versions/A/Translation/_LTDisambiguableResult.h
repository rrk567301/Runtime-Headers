@class NSArray, NSString, NSHashTable;
@protocol _LTDisambiguableResultDelegate;

@interface _LTDisambiguableResult : NSObject <_LTDisambiguableSentenceDelegate, NSSecureCoding, NSCopying> {
    NSHashTable *_observers;
}

@property (class, readonly, nonatomic) char isGenderDisambiguationEnabled;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *sentences;
@property (readonly, copy, nonatomic) NSString *sourceText;
@property (readonly, copy, nonatomic) NSString *targetText;
@property (readonly, copy, nonatomic) NSString *romanization;
@property (readonly, nonatomic) char hasDisambiguations;
@property (weak, nonatomic) id<_LTDisambiguableResultDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)combineResults:(id)a0 joinedWithString:(id)a1;
+ (id)combinedDisambiguableResultFromTranslationResults:(id)a0 joinedWithString:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_commonInit;
- (void)_insertPrefix:(id)a0;
- (void)disambiguableSentence:(id)a0 didSelectNode:(id)a1 atIndex:(unsigned long long)a2 withSelection:(id)a3;
- (id)excludedTypesForDisambiguableSentence:(id)a0;
- (id)generateAttributedStringForLocation:(unsigned long long)a0 withGlobalAttributes:(id)a1 attributeProvider:(id /* block */)a2;
- (char)hasDisambiguationsOfType:(unsigned long long)a0;
- (id)initWithSentences:(id)a0;
- (id)initWithSentences:(id)a0 joinedWithString:(id)a1;
- (id)sentenceWithUUID:(id)a0;

@end
