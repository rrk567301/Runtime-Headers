@class NSArray, NSDictionary;

@interface TCSmartReplyUserQuestionnaire : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *entries;
@property (readonly, copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntries:(id)a0;
- (id)initWithEntries:(id)a0 options:(id)a1;

@end
