@class NSString, NSURL;

@interface PKApplyFooterContentLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *linkText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (nonatomic) long long behavior;
@property (copy, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *analyticsIdentifier;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
