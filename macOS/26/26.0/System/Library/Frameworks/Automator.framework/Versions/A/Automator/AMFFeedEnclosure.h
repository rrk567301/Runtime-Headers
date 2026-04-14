@class NSURL, NSString;

@interface AMFFeedEnclosure : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long length;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 type:(id)a1 length:(unsigned long long)a2;

@end
