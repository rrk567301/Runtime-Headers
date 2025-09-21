@class NSString;

@interface CNLimitedAccessSyncEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *contactID;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic) char isActive;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
