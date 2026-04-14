@class NSString, NSDate;

@interface MGGroupsActivity : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *when;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
