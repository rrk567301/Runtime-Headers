@class NSArray, NSDictionary;

@interface TCSmartReplyUserQuestionnaire : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *entries;
@property (readonly, copy) NSDictionary *options;

- (id)initWithEntries:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0 options:(id)a1;

@end
