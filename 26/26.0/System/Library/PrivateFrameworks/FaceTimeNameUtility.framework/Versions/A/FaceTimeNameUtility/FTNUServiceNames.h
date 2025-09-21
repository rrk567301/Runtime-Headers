@class NSString;

@interface FTNUServiceNames : NSObject

@property (readonly, copy, nonatomic) NSString *faceTimeServiceName;
@property (readonly, copy, nonatomic) NSString *faceTimeVideoServiceName;
@property (readonly, copy, nonatomic) NSString *faceTimeAudioServiceName;

+ (id)localizedStringForKey:(id)a0;
+ (id)defaults;
+ (id)classBundle;
+ (id)testingOverrideFTAName;

- (BOOL)uplevelFTAEnabled;

@end
