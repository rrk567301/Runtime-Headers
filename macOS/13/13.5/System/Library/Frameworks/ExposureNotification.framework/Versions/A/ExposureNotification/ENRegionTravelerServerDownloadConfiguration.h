@class NSURL;

@interface ENRegionTravelerServerDownloadConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *tekTravelerDownloadBaseURL;
@property (readonly, copy, nonatomic) NSURL *tekTravelerDownloadIndexURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServerResponseDictionary:(id)a0;

@end
