@class NSString, NSData, NSDate;

@interface DAAppAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, copy, nonatomic) NSString *developerName;
@property (readonly, copy, nonatomic) NSData *iconData;
@property (readonly, copy, nonatomic) NSDate *cachedDate;
@property (readonly, nonatomic) BOOL isExpired;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 adamID:(id)a1 appName:(id)a2 developerName:(id)a3 iconData:(id)a4;

@end
