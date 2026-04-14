@class NSUUID, NSString, NSData;

@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int pid;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSData *cdHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isComplete;

@end
