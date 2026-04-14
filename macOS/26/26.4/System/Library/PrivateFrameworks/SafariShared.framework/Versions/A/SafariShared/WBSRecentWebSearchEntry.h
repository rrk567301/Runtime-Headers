@class NSString, NSArray, NSDate;

@interface WBSRecentWebSearchEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *searchString;
@property (readonly) NSDate *date;
@property (readonly) NSArray *URLStrings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSearchString:(id)a0 date:(id)a1 URLs:(id)a2;
- (id)initWithSearchString:(id)a0 url:(id)a1;

@end
