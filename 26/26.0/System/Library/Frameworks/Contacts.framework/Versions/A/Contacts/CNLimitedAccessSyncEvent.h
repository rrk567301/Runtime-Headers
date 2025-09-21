@class NSString;

@interface CNLimitedAccessSyncEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *contactID;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic) BOOL isActive;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
