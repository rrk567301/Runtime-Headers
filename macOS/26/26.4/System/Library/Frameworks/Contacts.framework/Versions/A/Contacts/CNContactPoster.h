@class NSString, NSData, CNContactImage;

@interface CNContactPoster : CNContactPosterDataItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *posterData;
@property (readonly, nonatomic) NSData *posterMetadata;
@property (nonatomic) BOOL contentIsSensitive;
@property (retain, nonatomic) NSData *watchPosterImageData;
@property (weak, nonatomic) CNContactImage *pairedImage;

- (void)acceptVisitor:(id)a0;
- (id)initWithManagedObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 posterData:(id)a1 lastUsedDate:(id)a2 itemDetails:(unsigned long long)a3;
- (id)initWithIdentifier:(id)a0 posterData:(id)a1 posterMetadata:(id)a2 watchPosterData:(id)a3 lastUsedDate:(id)a4 itemDetails:(unsigned long long)a5;
- (id)initWithManagedObject:(id)a0 image:(id)a1;
- (id)initWithPosterData:(id)a0 lastUsedDate:(id)a1 itemDetails:(unsigned long long)a2;
- (id)initWithPosterData:(id)a0 posterMetadata:(id)a1 lastUsedDate:(id)a2 itemDetails:(unsigned long long)a3;

@end
