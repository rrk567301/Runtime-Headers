@class NSString, NSData;

@interface CRKApplication : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSData *badgeIconData;
@property (copy, nonatomic) NSString *shortVersionString;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
