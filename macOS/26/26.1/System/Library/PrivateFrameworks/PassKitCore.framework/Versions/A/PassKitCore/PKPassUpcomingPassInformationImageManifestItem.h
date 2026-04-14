@class NSURL, NSData, NSNumber;

@interface PKPassUpcomingPassInformationImageManifestItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSData *SHA256;
@property (readonly, nonatomic) NSNumber *size;
@property (readonly, nonatomic) double scale;

+ (id)createFromDictionary:(id)a0;

- (id)_initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_createValidatedImageFromData:(id)a0 error:(id *)a1;
- (BOOL)composeFromDictionary:(id)a0;
- (void)downloadImageWithCompletion:(id /* block */)a0;
- (id)sessionCachedImageIfExists;

@end
