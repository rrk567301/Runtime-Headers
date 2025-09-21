@class NSURL, AMPArtworkRequest, NSData, NSError;

@interface AMPArtworkRequestResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) AMPArtworkRequest *request;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSData *securityExtension;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned int status;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
