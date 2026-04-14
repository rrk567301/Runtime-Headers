@class NSNumber;

@interface MTROtaSoftwareUpdateRequestorClusterDownloadErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSNumber *bytesDownloaded;
@property (copy, nonatomic) NSNumber *progressPercent;
@property (copy, nonatomic) NSNumber *platformCode;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
