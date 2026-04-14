@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (id)_deepCopy;
- (id)initWithCoder:(id)a0;
- (BOOL)deniedSharing;
- (unsigned long long)hash;
- (id)recordWithReadingDisabled;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readingEnabled;
- (void).cxx_destruct;
- (BOOL)requestedSharing;
- (id)description;
- (BOOL)deniedReading;
- (BOOL)sharingEnabled;
- (id)recordWithSharingDisabled;
- (BOOL)requestedReading;
- (BOOL)isCompatibleStatus:(long long)a0;

@end
