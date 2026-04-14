@class NSURL;

@interface _LSRemoteOpenCallOutputs : NSObject <NSSecureCoding> {
    struct vector<ProcessSerialNumber, std::allocator<ProcessSerialNumber>> { struct ProcessSerialNumber *__begin_; struct ProcessSerialNumber *__end_; struct ProcessSerialNumber *__cap_; } outPSNs;
    NSURL *outAppURL;
    BOOL outAppWasLaunched;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
