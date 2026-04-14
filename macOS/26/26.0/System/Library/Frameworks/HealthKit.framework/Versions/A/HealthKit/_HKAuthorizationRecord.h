@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (BOOL)deniedReading;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readingEnabled;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;
- (id)_deepCopy;
- (BOOL)sharingEnabled;
- (id)description;
- (BOOL)requestedReading;
- (id)recordWithReadingDisabled;
- (id)initWithCoder:(id)a0;
- (id)recordWithSharingDisabled;
- (BOOL)isCompatibleStatus:(long long)a0;
- (unsigned long long)hash;
- (BOOL)requestedSharing;
- (BOOL)isEqual:(id)a0;
- (BOOL)deniedSharing;
- (void).cxx_destruct;

@end
