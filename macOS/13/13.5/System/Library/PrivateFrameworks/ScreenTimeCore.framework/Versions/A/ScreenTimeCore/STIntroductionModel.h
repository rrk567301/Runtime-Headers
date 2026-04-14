@class NSDictionary, NSDateComponents, NSString;

@interface STIntroductionModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDateComponents *downtimeStartTime;
@property (copy) NSDateComponents *downtimeEndTime;
@property (copy) NSDictionary *restrictions;
@property (copy) NSString *passcode;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDowntimeStartTime:(id)a0 downtimeEndTime:(id)a1 restrictions:(id)a2 passcode:(id)a3;

@end
