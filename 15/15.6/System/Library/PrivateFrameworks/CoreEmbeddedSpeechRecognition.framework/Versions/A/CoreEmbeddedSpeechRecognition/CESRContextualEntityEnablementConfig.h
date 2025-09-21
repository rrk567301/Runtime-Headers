@interface CESRContextualEntityEnablementConfig : NSObject

@property (readonly, nonatomic) char shouldRetrieve;
@property (readonly, nonatomic) char shouldEnroll;

- (id)description;
- (id)initWithShouldRetrieve:(char)a0 shouldEnroll:(char)a1;

@end
