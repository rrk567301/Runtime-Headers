@class NSDate;

@interface LACDTOLostModeState : NSObject

@property (readonly, nonatomic) char isInLostMode;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) char confirmed;

+ (id)nullInstance;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isValid:(id)a0;
- (id)initWithIsInLostMode:(char)a0 confirmed:(char)a1;
- (id)initWithIsInLostMode:(char)a0;
- (id)initWithIsInLostMode:(char)a0 confirmed:(char)a1 createdAt:(id)a2;

@end
