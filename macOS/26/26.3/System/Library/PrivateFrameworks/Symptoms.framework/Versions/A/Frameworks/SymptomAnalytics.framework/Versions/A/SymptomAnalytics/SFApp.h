@class NSSet;

@interface SFApp : Process

@property (retain, nonatomic) NSSet *hasAppExperience;
@property (retain, nonatomic) NSSet *hasAppEndpoint;

+ (id)fetchRequest;
+ (id)entityName;

- (BOOL)isApp;

@end
