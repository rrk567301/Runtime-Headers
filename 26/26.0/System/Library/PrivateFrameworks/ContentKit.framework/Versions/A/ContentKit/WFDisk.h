@class NSString, NSDictionary, NSURL, WFFileRepresentation;

@interface WFDisk : NSObject <NSCopying, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *diskName;
@property (readonly, copy, nonatomic) NSString *volumeUUID;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) WFFileRepresentation *fileRepresentation;
@property (readonly, nonatomic) NSURL *rawURL;
@property (readonly, copy, nonatomic) NSString *wfName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDiskName:(id)a0 volumeUUID:(id)a1 metadata:(id)a2 fileRepresentation:(id)a3;
- (id)initWithDiskName:(id)a0 volumeUUID:(id)a1 metadata:(id)a2 rawURL:(id)a3;

@end
