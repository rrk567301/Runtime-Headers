@class NSURL, NSNumber, NSString;

@interface SUPackageIntegrityInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *integrityDataURL;
@property (readonly) NSNumber *integrityDataSize;
@property (readonly) NSString *integrityDataChecksum;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithIntegrityDataURL:(id)a0 withIntegrityDataSize:(id)a1 withIntegrityDataChecksum:(id)a2;

@end
