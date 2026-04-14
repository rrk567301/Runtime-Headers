@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;
- (BOOL)readingEnabled;
- (BOOL)requestedSharing;
- (BOOL)sharingEnabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)deniedSharing;
- (void)encodeWithCoder:(id)a0;
- (id)recordWithSharingDisabled;
- (BOOL)isEqual:(id)a0;
- (BOOL)requestedReading;
- (BOOL)deniedReading;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)_deepCopy;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)recordWithReadingDisabled;
- (BOOL)isCompatibleStatus:(long long)a0;

@end
