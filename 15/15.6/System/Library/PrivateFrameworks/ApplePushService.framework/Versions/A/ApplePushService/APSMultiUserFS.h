@interface APSMultiUserFS : NSObject

@property (readonly) char isMultiUser;

+ (id)sharedInstance;

- (id)initWithIsMultiUserMode:(char)a0;
- (id)systemPath;

@end
