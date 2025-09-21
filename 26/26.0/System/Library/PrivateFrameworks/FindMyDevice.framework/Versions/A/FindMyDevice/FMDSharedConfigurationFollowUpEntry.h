@class NSString, NSNumber;

@interface FMDSharedConfigurationFollowUpEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSNumber *reminderInMins;
@property (copy, nonatomic) NSNumber *idNumber;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *title;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
