@class NSString, NSDictionary, NSURL, NSNumber;

@interface UNCAttachmentRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL thumbnailHidden;
@property (copy, nonatomic) NSDictionary *thumbnailClippingRect;
@property (copy, nonatomic) NSNumber *thumbnailFrameNumber;
@property (copy, nonatomic) NSDictionary *thumbnailTimestamp;
@property (nonatomic) BOOL hiddenFromDefaultExpandedView;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
