@class NSString, NSDate;

@interface FBKBuild : FBKManagedFeedbackObject

@property (retain) NSString *name;
@property (retain) NSString *buildNumber;
@property (retain) NSDate *seedDate;

+ (id)entityName;

- (void)setPropertiesFromJSONObject:(id)a0;

@end
