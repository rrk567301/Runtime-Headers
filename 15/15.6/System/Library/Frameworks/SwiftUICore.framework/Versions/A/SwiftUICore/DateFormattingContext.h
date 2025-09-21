@class NSDate;

@interface DateFormattingContext : NSObject

@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) char isLuminanceReduced;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReferenceDate:(id)a0 isLuminanceReduced:(char)a1;

@end
