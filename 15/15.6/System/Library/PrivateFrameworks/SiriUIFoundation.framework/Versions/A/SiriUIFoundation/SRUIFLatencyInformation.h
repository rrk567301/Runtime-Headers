@class NSString;

@interface SRUIFLatencyInformation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *latencySummary;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (readonly, nonatomic) char shouldShow;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLatencySummary:(id)a0 taskIdentifier:(id)a1 shouldShow:(char)a2;

@end
