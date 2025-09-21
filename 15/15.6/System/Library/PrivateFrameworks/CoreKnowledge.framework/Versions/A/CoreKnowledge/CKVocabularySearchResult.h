@class NSString, NSObject;
@protocol CKVocabularyItem;

@interface CKVocabularySearchResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSObject<CKVocabularyItem> *vocabularyItem;
@property (readonly, nonatomic) NSString *originAppId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVocabularyItem:(id)a0 originAppId:(id)a1;
- (char)isEqualToSearchResult:(id)a0;

@end
