@class NSURL, NSData, NSFileHandle;

@interface Sage.DocumentXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _url;
    void /* function */ _metadata;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSURL *_url;
@property (nonatomic, retain) NSFileHandle *_fileHandle;
@property (nonatomic, copy) NSData *_metadata;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
