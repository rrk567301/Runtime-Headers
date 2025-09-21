@class NSDate;

@interface MIStashMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *dateStashed;
@property (retain, nonatomic) NSDate *dateOriginallyInstalled;

+ (id)metadataFromURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)serializeToURL:(id)a0 error:(id *)a1;

@end
