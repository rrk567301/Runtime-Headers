@class NSURL, NSString, NSNumber;

@interface PKPassUpcomingPassInformationImageManifestItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *SHA256Hex;
@property (readonly, nonatomic) NSNumber *size;
@property (readonly, nonatomic) double scale;

+ (id)createFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_initWithURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)composeFromDictionary:(id)a0;
- (void)downloadImageWithCompletion:(id /* block */)a0;
- (id)sessionCachedImageIfExists;

@end
