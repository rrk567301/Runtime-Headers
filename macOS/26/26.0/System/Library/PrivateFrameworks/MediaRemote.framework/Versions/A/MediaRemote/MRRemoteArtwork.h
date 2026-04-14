@class NSString, NSData;

@interface MRRemoteArtwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) NSData *artworkURLTemplateData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobufData:(id)a0;
- (id)initWithArtworkURLString:(id)a0 templateData:(id)a1;
- (id)protobufData;

@end
