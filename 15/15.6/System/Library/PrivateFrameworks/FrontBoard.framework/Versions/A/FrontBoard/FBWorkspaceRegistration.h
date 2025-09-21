@class NSString;

@interface FBWorkspaceRegistration : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char acceptsClientScenes;

+ (id)registrationWithIdentifier:(id)a0 options:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
