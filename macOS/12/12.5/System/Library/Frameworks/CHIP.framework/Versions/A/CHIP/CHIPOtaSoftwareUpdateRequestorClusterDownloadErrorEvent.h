@class NSNumber;

@interface CHIPOtaSoftwareUpdateRequestorClusterDownloadErrorEvent : NSObject

@property (retain, nonatomic) NSNumber *softwareVersion;
@property (retain, nonatomic) NSNumber *bytesDownloaded;
@property (retain, nonatomic) NSNumber *progressPercent;
@property (retain, nonatomic) NSNumber *platformCode;

- (id)init;
- (void).cxx_destruct;

@end
