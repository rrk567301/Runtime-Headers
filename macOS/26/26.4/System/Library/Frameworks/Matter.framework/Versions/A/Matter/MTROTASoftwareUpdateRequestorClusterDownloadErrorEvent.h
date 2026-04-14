@class NSNumber;

@interface MTROTASoftwareUpdateRequestorClusterDownloadErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSNumber *bytesDownloaded;
@property (copy, nonatomic) NSNumber *progressPercent;
@property (copy, nonatomic) NSNumber *platformCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
