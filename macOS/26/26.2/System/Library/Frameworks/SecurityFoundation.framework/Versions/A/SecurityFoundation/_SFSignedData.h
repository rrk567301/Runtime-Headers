@class NSData;

@interface _SFSignedData : NSObject <NSCopying, NSSecureCoding> {
    id _signedDataInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *data;
@property (readonly) NSData *signature;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 signature:(id)a1;

@end
