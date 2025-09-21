@class NSString, NSData;

@interface ICEvernoteResource : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isAttachment;
@property (copy, nonatomic) NSString *mime;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *md5Hash;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) double duration;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
