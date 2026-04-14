@class NSString, NSData;

@interface MRRemoteArtwork : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) NSData *artworkURLTemplateData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArtworkURLString:(id)a0 templateData:(id)a1;
- (id)initWithProtobuf:(id)a0;

@end
