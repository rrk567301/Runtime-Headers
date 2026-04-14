@class NSURL, NSData, NSDictionary;

@interface NDOAMSProperties : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _url;
    void /* unknown type, empty encoding */ bodyData;
    void /* unknown type, empty encoding */ signatureHeaders;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSData *bodyData;
@property (nonatomic, readonly) NSDictionary *signatureHeaders;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ presentModally;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUrl:(id)a0 signatureHeaders:(id)a1 bodyData:(id)a2;
- (id)initWithUrl:(id)a0 signatureHeaders:(id)a1 bodyData:(id)a2 presentModally:(BOOL)a3;

@end
