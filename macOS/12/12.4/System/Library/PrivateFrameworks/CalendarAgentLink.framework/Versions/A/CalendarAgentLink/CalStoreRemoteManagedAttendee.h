@class NSURL, NSString;

@interface CalStoreRemoteManagedAttendee : CalStoreRemoteManagedObject

@property (retain, nonatomic) NSURL *address;
@property (retain, nonatomic) NSString *commonName;
@property (retain, nonatomic) NSString *status;
@property (nonatomic) int type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
