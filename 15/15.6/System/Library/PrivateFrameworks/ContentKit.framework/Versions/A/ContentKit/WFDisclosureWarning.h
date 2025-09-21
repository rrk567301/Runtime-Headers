@class NSSet, NSString;

@interface WFDisclosureWarning : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *allDisclosureWarningClasses;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedMessage;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
