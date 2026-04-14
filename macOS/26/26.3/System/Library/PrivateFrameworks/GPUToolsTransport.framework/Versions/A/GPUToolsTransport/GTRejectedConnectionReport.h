@class NSString, NSDate;

@interface GTRejectedConnectionReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *timestamp;
@property unsigned long long pid;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
