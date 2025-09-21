@class NSString, NSNumber, NSError;

@interface ASDJob : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *externalOrderKey;
@property (readonly, nonatomic) NSError *failureError;
@property (readonly, nonatomic) NSNumber *orderKey;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) long long phase;
@property (readonly, nonatomic) long long purchaseID;
@property (readonly, nonatomic) long long storeItemID;
@property (readonly, nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
