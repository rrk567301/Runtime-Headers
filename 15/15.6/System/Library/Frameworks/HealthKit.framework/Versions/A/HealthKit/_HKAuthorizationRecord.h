@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)sharingEnabled;
- (id)_deepCopy;
- (char)deniedReading;
- (char)deniedSharing;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;
- (char)isCompatibleStatus:(long long)a0;
- (char)readingEnabled;
- (id)recordWithReadingDisabled;
- (id)recordWithSharingDisabled;
- (char)requestedReading;
- (char)requestedSharing;

@end
