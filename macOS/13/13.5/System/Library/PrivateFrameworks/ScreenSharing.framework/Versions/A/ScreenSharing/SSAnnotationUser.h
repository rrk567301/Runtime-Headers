@class NSString;

@interface SSAnnotationUser : NSObject

@property (retain) NSString *userID;
@property (retain) NSString *displayName;

+ (id)userWithDisplayName:(id)a0;

- (id)initWithDisplayName:(id)a0;

@end
