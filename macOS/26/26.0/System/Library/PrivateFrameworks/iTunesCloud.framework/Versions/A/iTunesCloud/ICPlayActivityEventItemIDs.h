@class NSString;

@interface ICPlayActivityEventItemIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long cloudID;
@property (readonly, copy, nonatomic) NSString *lyricsID;
@property (readonly, nonatomic) long long purchasedAdamID;
@property (readonly, nonatomic) long long radioAdamID;
@property (readonly, nonatomic) long long equivalencySourceAdamID;
@property (readonly, nonatomic) long long reportingAdamID;
@property (readonly, nonatomic) long long subscriptionAdamID;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_copyWithClass:(Class)a0;

@end
