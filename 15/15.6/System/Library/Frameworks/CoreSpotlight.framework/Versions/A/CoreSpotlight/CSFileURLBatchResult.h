@class NSURL, NSError;

@interface CSFileURLBatchResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSURL *url;
@property (readonly) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0 andError:(id)a1;

@end
