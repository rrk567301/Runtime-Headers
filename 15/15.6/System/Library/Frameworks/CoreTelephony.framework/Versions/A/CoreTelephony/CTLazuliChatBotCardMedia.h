@class NSURL, NSString, NSNumber;

@interface CTLazuliChatBotCardMedia : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *mediaUrl;
@property (retain, nonatomic) NSString *mediaContentType;
@property (retain, nonatomic) NSNumber *mediaFileSize;
@property (retain, nonatomic) NSURL *thumbnailUrl;
@property (retain, nonatomic) NSString *thumbnailContentType;
@property (retain, nonatomic) NSNumber *thumbnailFileSize;
@property (nonatomic) long long height;
@property (retain, nonatomic) NSString *contentDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliChatBotCardMedia:(id)a0;

@end
