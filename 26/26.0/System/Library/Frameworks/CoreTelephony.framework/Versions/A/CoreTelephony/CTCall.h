@class NSString;

@interface CTCall : NSObject

@property (copy, nonatomic) NSString *callState;
@property (copy, nonatomic) NSString *callID;

+ (id)callForCXCall:(id)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
