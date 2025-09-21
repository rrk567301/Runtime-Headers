@class NSURL, NSUUID, VCSandboxedURL;

@interface AVCAnsweringMachineConfiguration : NSObject <NSCopying> {
    VCSandboxedURL *_announcementAsset;
    int _clientPid;
}

@property (nonatomic) unsigned char source;
@property (nonatomic) BOOL isMessageRecordingEnabled;
@property (nonatomic) BOOL isMessageCaptioningEnabled;
@property (nonatomic) BOOL isMessagePlaybackEnabled;
@property (retain, nonatomic) NSURL *announcementAsset;
@property (nonatomic) unsigned int announcementAssetMilliSecondDelay;
@property (nonatomic) unsigned char usage;
@property (retain, nonatomic) NSUUID *reportingSamplingUUID;

+ (const char *)cStringFromCallSource:(unsigned char)a0;
+ (id)stringFromCallSource:(unsigned char)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (int)clientPid;
- (id)dictionary;
- (id)initWithClientDictionary:(id)a0 clientPid:(int)a1;

@end
