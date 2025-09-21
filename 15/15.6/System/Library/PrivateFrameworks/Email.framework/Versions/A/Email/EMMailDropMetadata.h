@class NSString, NSURL, NSDate;

@interface EMMailDropMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) char autoArchive;
@property (retain, nonatomic) NSURL *directUrl;
@property (retain, nonatomic) NSURL *wrappedUrl;
@property (retain, nonatomic) NSDate *expiration;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSString *UUID;
@property (nonatomic) char isInvalid;

+ (id)mailDropMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)merge:(id)a0;
- (char)isExpired;
- (id)directUrlString;
- (char)isBanner;
- (char)isBannerWithMultiple;
- (char)isPhotoArchive;
- (id)wrappedUrlString;

@end
