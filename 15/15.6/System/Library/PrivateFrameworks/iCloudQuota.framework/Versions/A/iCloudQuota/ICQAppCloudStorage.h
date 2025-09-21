@class NSString, NSNumber, NSURL;

@interface ICQAppCloudStorage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *storageUsed;
@property (retain, nonatomic) NSURL *ruiURL;
@property (retain, nonatomic) NSURL *liftUIURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
