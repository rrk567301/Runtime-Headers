@class NSString, NSDate;

@interface MGGroupsActivity : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *when;

- (id)description;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
