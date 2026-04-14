@class NSString, NSURL;

@interface PKApplyFooterContentLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *linkText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (nonatomic) long long behavior;
@property (copy, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *analyticsIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
