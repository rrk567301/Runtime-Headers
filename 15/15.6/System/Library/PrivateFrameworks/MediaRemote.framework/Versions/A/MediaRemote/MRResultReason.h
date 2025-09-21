@class NSString;

@interface MRResultReason : NSObject

@property (readonly, nonatomic) char result;
@property (readonly, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (id)initWithResult:(char)a0 format:(id)a1;
- (id)initWithResult:(char)a0 reason:(id)a1;

@end
