@class NSString, PFPosterPath;

@interface PosterModel.PosterConfiguration : NSObject <NSSecureCoding, PFPosterContents> {
    void /* unknown type, empty encoding */ __path;
    void /* unknown type, empty encoding */ pathValidityExtension;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) PFPosterPath *_path;
@property (nonatomic, readonly) NSString *descriptorIdentifier;
@property (nonatomic, readonly) NSString *role;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
