@class NSString, NSArray, NSDictionary;

@interface GTProcessInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSDictionary *environment;
@property (nonatomic) int processIdentifier;
@property (nonatomic) int ppid;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
