@class NSString, INShortcut, WFWorkflow, NSDate, INImage, NSNumber;

@interface VCVoiceShortcut : NSObject <INVCVoiceShortcut, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSDate *dateLastModified;
@property (readonly, nonatomic) NSDate *lastRunDate;
@property (readonly, nonatomic) BOOL hasBeenModified;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSDate *dateLastModified;
@property (readonly, nonatomic) NSDate *lastRunDate;
@property (readonly, nonatomic) BOOL hasBeenModified;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *phrase;
@property (readonly, copy, nonatomic) NSString *shortcutName;
@property (readonly, copy, nonatomic) NSString *shortcutDescription;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) INImage *keyImage;
@property (readonly, nonatomic) INShortcut *shortcut;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) NSNumber *runEventsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
