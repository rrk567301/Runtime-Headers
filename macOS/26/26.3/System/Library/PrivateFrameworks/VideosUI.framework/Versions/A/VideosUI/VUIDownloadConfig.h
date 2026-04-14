@class NSArray;

@interface VUIDownloadConfig : NSObject

@property (retain, nonatomic) NSArray *blacklistedEarlyRenewalBrands;
@property (nonatomic) BOOL allowEnhancedDownloads;
@property (nonatomic) BOOL updateCoverArtForExistingDownloads;

- (id)init;
- (void).cxx_destruct;

@end
