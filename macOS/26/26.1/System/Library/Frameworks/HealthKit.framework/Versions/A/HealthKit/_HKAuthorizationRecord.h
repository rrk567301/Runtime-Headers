@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (id)recordWithReadingDisabled;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;
- (unsigned long long)hash;
- (BOOL)requestedSharing;
- (BOOL)requestedReading;
- (BOOL)deniedSharing;
- (id)_deepCopy;
- (BOOL)deniedReading;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isCompatibleStatus:(long long)a0;
- (id)description;
- (BOOL)readingEnabled;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)sharingEnabled;
- (id)recordWithSharingDisabled;

@end
