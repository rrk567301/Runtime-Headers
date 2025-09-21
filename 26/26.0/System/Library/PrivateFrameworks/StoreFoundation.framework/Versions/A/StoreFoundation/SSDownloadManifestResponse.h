@class NSArray;

@interface SSDownloadManifestResponse : NSObject <NSCoding> {
    NSArray *_invalidDownloads;
    NSArray *_validDownloads;
}

@property (retain) NSArray *invalidDownloads;
@property (retain) NSArray *validDownloads;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
