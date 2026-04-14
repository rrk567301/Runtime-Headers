@class NSArray;

@interface VUIDownloadConfig : NSObject

@property (retain, nonatomic) NSArray *blacklistedEarlyRenewalBrands;
@property (nonatomic) BOOL allowEnhancedDownloads;
@property (nonatomic) BOOL updateCoverArtForExistingDownloads;

- (void).cxx_destruct;
- (id)init;

@end
