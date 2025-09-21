@class NSDate;

@interface WFDetectedDate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) char timeIsSignificant;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 timeIsSignificant:(char)a1;
- (id)initWithDateCheckingResult:(id)a0;

@end
