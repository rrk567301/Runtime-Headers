@class NSString, NSNumber, NSDictionary;

@interface FSServerURLParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *scheme;
@property (copy) NSString *host;
@property (copy) NSNumber *port;
@property (copy) NSString *user;
@property (copy) NSString *password;
@property (copy) NSString *path;
@property (copy) NSString *options;
@property (copy) NSDictionary *extras;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
