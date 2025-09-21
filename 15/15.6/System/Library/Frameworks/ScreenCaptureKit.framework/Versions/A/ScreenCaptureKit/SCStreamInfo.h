@class SCContentFilter, NSString, SCCompositeConfiguration, SCContentSharingPickerConfiguration, SCContentSharingPickerInfo;

@interface SCStreamInfo : NSObject

@property (retain, nonatomic) SCContentSharingPickerInfo *picker;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (retain, nonatomic) NSString *streamID;
@property (retain, nonatomic) NSString *mainAppBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) SCContentSharingPickerConfiguration *pickerConfiguration;
@property (retain, nonatomic) NSString *streamName;
@property (nonatomic) long long filterType;
@property (nonatomic) unsigned int captureID;
@property (nonatomic) int pid;
@property (retain, nonatomic) SCContentFilter *streamContentFilter;
@property (retain, nonatomic) SCCompositeConfiguration *streamCompositeConfig;
@property (nonatomic) char canAdd;
@property (nonatomic) char canRemove;
@property (nonatomic) char canReplace;
@property (nonatomic) char canAddApplication;
@property (nonatomic) char canRemoveApplication;
@property (nonatomic) char canReplaceApplication;
@property (nonatomic) double previewAspectRatio;
@property (nonatomic) char isRecordingOnly;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithConfiguration:(id)a0 contentFilter:(id)a1;
- (char)isEqualToStreamInfo:(id)a0;

@end
