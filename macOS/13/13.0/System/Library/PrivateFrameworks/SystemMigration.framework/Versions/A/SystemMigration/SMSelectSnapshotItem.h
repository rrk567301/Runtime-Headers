@class NSString, NSDate;

@interface SMSelectSnapshotItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *uuid;
@property (retain) NSDate *date;
@property (retain) NSString *machineName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
