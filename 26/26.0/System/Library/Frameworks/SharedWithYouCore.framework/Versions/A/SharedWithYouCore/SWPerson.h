@class NSData, SWPersonIdentity;

@interface SWPerson : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id slPerson;
@property (readonly, nonatomic) NSData *customThumbnailImageData;
@property (retain, nonatomic) SWPersonIdentity *identity;

- (id)contact;
- (id)handle;
- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)thumbnailImageData;
- (id)initWithHandle:(id)a0 identity:(id)a1 displayName:(id)a2 thumbnailImageData:(id)a3;
- (id)initWithHandle:(id)a0 displayName:(id)a1 thumbnailImageData:(id)a2;

@end
