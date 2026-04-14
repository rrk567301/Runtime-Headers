@class NSDate;

@interface MIStashMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *dateStashed;
@property (retain, nonatomic) NSDate *dateOriginallyInstalled;

+ (id)metadataFromURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)serializeToURL:(id)a0 error:(id *)a1;

@end
