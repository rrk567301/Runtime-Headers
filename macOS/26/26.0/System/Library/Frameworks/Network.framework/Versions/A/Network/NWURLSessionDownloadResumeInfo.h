@class NSURL, NSString;

@interface NWURLSessionDownloadResumeInfo : NWURLSessionResumeInfo

@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *tempFileName;
@property (nonatomic) BOOL _keepDownloadTaskFile;

+ (BOOL)supportsSecureCoding;
+ (id)infoWithResumeData:(id)a0;
+ (id)infoWithTask:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
