@class NSURL, VCSandboxedURL;

@interface AVCAnsweringMachineConfiguration : NSObject <NSCopying> {
    VCSandboxedURL *_announcementAsset;
    int _clientPid;
}

@property (nonatomic) unsigned char source;
@property (nonatomic) char isMessageRecordingEnabled;
@property (nonatomic) char isMessageCaptioningEnabled;
@property (nonatomic) char isMessagePlaybackEnabled;
@property (retain, nonatomic) NSURL *announcementAsset;
@property (nonatomic) unsigned int announcementAssetMilliSecondDelay;

+ (id)stringFromCallSource:(unsigned char)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)dictionary;
- (int)clientPid;
- (id)initWithClientDictionary:(id)a0 clientPid:(int)a1;

@end
