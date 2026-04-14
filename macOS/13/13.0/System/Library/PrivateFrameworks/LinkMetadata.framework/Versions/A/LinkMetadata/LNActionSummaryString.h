@class NSString, NSArray;

@interface LNActionSummaryString : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *formatString;
@property (readonly, nonatomic) NSArray *parameterIdentifiers;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFormatString:(id)a0 parameterIdentifiers:(id)a1;

@end
