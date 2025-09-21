@class NSData;

@interface AMWebArchiveXPCToken : AMXPCToken

@property (retain) NSData *_webArchiveData;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWebArchive:(id)a0;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
