@class NSString;

@interface CLSEKSharee : NSObject <NSCoding>

@property (readonly) NSString *emailAddress;
@property (readonly) NSString *name;
@property (readonly) BOOL isCurrentUserForSharing;
@property (readonly) BOOL isCurrentUserForScheduling;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEKSharee:(id)a0;

@end
