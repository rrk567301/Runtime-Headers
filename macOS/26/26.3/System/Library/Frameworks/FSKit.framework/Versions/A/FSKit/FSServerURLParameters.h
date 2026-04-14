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

- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
