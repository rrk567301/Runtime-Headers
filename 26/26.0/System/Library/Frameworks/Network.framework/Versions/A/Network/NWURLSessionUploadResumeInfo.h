@class NSURL, NSData;

@interface NWURLSessionUploadResumeInfo : NWURLSessionResumeInfo

@property (retain, nonatomic) NSURL *resumeURL;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *fileURL;

+ (BOOL)supportsSecureCoding;
+ (id)infoWithResumeData:(id)a0;
+ (id)infoWithTask:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
