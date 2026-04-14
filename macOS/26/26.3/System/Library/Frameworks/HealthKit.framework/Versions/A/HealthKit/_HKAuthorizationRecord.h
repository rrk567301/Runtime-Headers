@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (BOOL)deniedReading;
- (id)recordWithReadingDisabled;
- (BOOL)readingEnabled;
- (id)recordWithSharingDisabled;
- (id)description;
- (id)_deepCopy;
- (BOOL)requestedSharing;
- (BOOL)isCompatibleStatus:(long long)a0;
- (BOOL)requestedReading;
- (BOOL)deniedSharing;
- (void).cxx_destruct;
- (BOOL)sharingEnabled;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
