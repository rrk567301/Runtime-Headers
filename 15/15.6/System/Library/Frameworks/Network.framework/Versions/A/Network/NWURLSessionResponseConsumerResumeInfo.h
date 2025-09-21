@class NSURL, NSString;

@interface NWURLSessionResponseConsumerResumeInfo : NSObject <NSSecureCoding> {
    NSURL *_fileURL;
    NSString *_tempFileName;
}

@property (class, readonly) char supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
