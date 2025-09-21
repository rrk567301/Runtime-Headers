@class NSString, NSDate;

@interface GTRejectedConnectionReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *timestamp;
@property unsigned long long pid;
@property (retain) NSString *name;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
