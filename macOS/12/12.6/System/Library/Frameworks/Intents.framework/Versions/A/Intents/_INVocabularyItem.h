@class NSUUID, NSString;

@interface _INVocabularyItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setSiriID:) NSUUID *_siriID;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;
@property (readonly, nonatomic) BOOL requiresUserIdentification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)validate;
- (BOOL)_isSimilarEnoughToNotSync:(id)a0;
- (id)initWithString:(id)a0 vocabularyIdentifier:(id)a1 requiresUserIdentification:(BOOL)a2;
- (id)_initWithUncheckedString:(id)a0 vocabularyIdentifier:(id)a1 requiresUserIdentification:(BOOL)a2;
- (id)initWithString:(id)a0 vocabularyIdentifier:(id)a1;
- (id)_initWithVocabularyItem:(id)a0;
- (id)_initWithUncheckedSpeakable:(id)a0;
- (id)initWithSpeakable:(id)a0;
- (id)_dictionaryForSaving;

@end
