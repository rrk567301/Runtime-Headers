@interface FCTimeControl : NSObject

@property char enabled;
@property long long rangeType;

- (id)description;
- (char)dateIsInEffect:(id)a0;

@end
