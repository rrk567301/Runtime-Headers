@class NSURL, NSData, NSDictionary;

@interface NDOAMSProperties : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _url;
    void /* function */ bodyData;
    void /* function */ signatureHeaders;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSData *bodyData;
@property (nonatomic, readonly) NSDictionary *signatureHeaders;
@property (nonatomic, readonly) BOOL presentModally;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 signatureHeaders:(id)a1 bodyData:(id)a2;
- (id)initWithUrl:(id)a0 signatureHeaders:(id)a1 bodyData:(id)a2 presentModally:(BOOL)a3;

@end
