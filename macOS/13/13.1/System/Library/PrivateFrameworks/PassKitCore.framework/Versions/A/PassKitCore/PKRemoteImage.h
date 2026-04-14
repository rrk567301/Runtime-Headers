@class NSURL;

@interface PKRemoteImage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *remoteURL;
@property (nonatomic) unsigned long long scaleFactor;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithRemoteURL:(id)a0 scaleFactor:(unsigned long long)a1;
- (id)initWithRemoteURL:(id)a0 scaleFactor:(unsigned long long)a1 width:(double)a2 height:(double)a3;
- (void)fetchImageWithCompletion:(id /* block */)a0;
- (BOOL)isEqualToRemoteImage:(id)a0;

@end
