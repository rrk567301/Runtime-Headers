@class CTLazuliChatBotSuggestedChipList, NSString, CTLazuliCustomMetaData;

@interface CTLazuliMessageText : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotSuggestedChipList *chipList;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) CTLazuliCustomMetaData *metaData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliMessageText:(id)a0;

@end
