@class NSURL, NSString, NSNumber;

@interface CTLazuliFileTransferCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *contentServerUploadUrl;
@property (retain, nonatomic) NSURL *contentServerDownloadUrl;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSNumber *max1ToManyRecipients;
@property (retain, nonatomic) NSNumber *maxTransferSize;
@property (nonatomic) char autoAccept;
@property (nonatomic) char httpFallback;
@property (retain, nonatomic) NSNumber *warnSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliFileTransferCapabilities:(id)a0;

@end
