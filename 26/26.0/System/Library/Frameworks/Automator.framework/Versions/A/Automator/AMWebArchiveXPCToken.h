@class NSData;

@interface AMWebArchiveXPCToken : AMXPCToken

@property (retain) NSData *_webArchiveData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWebArchive:(id)a0;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
