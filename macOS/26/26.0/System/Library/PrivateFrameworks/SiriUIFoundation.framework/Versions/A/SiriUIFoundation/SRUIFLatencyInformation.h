@class NSString;

@interface SRUIFLatencyInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *latencySummary;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (readonly, nonatomic) BOOL shouldShow;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLatencySummary:(id)a0 taskIdentifier:(id)a1 shouldShow:(BOOL)a2;

@end
