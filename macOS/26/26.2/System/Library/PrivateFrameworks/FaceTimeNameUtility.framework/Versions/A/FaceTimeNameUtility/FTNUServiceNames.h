@class NSString;

@interface FTNUServiceNames : NSObject

@property (readonly, copy, nonatomic) NSString *faceTimeServiceName;
@property (readonly, copy, nonatomic) NSString *faceTimeVideoServiceName;
@property (readonly, copy, nonatomic) NSString *faceTimeAudioServiceName;

+ (id)defaults;
+ (id)localizedStringForKey:(id)a0;
+ (id)classBundle;
+ (id)testingOverrideFTAName;

- (BOOL)uplevelFTAEnabled;

@end
