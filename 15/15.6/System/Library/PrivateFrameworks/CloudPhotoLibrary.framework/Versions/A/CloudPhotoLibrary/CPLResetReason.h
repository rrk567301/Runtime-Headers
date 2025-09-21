@class NSString, NSDate;

@interface CPLResetReason : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) id asPlist;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic) char tentative;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlist:(id)a0;
- (id)initWithDate:(id)a0 reason:(id)a1;
- (id)reasonDescriptionWithNow:(id)a0;

@end
