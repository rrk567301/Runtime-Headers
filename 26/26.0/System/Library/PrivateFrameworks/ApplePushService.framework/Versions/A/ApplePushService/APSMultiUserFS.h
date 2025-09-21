@interface APSMultiUserFS : NSObject

@property (readonly) BOOL isMultiUser;

+ (id)sharedInstance;

- (id)systemPath;
- (id)initWithIsMultiUserMode:(BOOL)a0;

@end
