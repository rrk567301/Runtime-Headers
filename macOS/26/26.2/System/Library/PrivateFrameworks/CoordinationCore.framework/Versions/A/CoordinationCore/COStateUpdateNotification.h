@class NSDictionary;

@interface COStateUpdateNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSDictionary *updates;
@property (readonly, copy, nonatomic) NSDictionary *removals;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdates:(id)a0 removals:(id)a1;

@end
