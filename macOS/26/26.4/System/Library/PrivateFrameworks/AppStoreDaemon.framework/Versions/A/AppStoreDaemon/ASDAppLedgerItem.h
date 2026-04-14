@class NSString, NSNumber, NSDate;

@interface ASDAppLedgerItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bundleID;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSNumber *itemID;
@property (readonly) NSNumber *versionID;
@property (readonly) NSDate *installDate;
@property (readonly) NSDate *lastLaunchDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 bundleVersion:(id)a1 itemID:(id)a2 versionID:(id)a3 installDate:(id)a4 lastLaunchDate:(id)a5;

@end
