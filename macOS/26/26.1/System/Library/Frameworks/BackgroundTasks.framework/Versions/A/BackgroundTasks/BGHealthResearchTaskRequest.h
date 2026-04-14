@class NSString;

@interface BGHealthResearchTaskRequest : BGProcessingTaskRequest

@property NSString *protectionTypeOfRequiredData;

+ (Class)_correspondingTaskClass;
+ (id)_requestFromActivity:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_activity;

@end
