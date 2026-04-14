@class NSString;

@interface CLSEKSharee : NSObject <NSCoding>

@property (readonly) NSString *emailAddress;
@property (readonly) NSString *name;
@property (readonly) BOOL isCurrentUserForSharing;
@property (readonly) BOOL isCurrentUserForScheduling;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEKSharee:(id)a0;

@end
