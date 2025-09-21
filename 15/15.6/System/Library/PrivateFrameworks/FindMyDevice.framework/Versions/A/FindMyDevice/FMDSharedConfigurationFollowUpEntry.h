@class NSString, NSNumber;

@interface FMDSharedConfigurationFollowUpEntry : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSNumber *reminderInMins;
@property (copy, nonatomic) NSNumber *idNumber;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *title;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
