@class NSArray, NSString;

@interface AVCScreenCaptureConfiguration : NSObject

@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) char isWindowed;
@property (nonatomic) unsigned int screenCaptureDisplayID;
@property (nonatomic) char isCursorCaptured;
@property (copy, nonatomic) NSArray *excludedApplicationBundleIDs;
@property (nonatomic) char shouldRunInProcess;
@property (nonatomic) unsigned int selectiveSharingPort;
@property (copy, nonatomic) NSString *selectiveScreenUUID;
@property (nonatomic) unsigned int displayMode;

- (void)dealloc;
- (id)init;
- (id)initWithHeight:(unsigned int)a0 width:(unsigned int)a1 framerate:(unsigned int)a2 screenCaptureDisplayID:(unsigned int)a3;

@end
