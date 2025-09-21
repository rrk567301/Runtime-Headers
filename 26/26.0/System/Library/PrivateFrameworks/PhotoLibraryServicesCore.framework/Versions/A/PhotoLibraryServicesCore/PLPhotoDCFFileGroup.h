@class NSString, PLPhotoDCFDirectory, NSMutableSet, NSDate;

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject {
    id _delegate;
    PLPhotoDCFDirectory *_directory;
    NSString *_directoryPath;
    NSString *_prebakedThumbnailPath;
    NSString *_videoFileExtension;
    NSMutableSet *_extensions;
    NSDate *_date;
    NSString *_preferredExtension;
    unsigned long long _hash;
    unsigned char _hashComputed : 1;
    unsigned char _addedExtensions : 1;
    unsigned char _writeIsPending : 1;
}

+ (id)allMetadataFileExtensions;

- (id)directory;
- (id)extensions;
- (BOOL)isValid;
- (BOOL)hasThumbnail;
- (void)setDate:(id)a0;
- (id)date;
- (void)setDelegate:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (id)delegate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addExtension:(id)a0;
- (void).cxx_destruct;
- (id)pathForVideoPreviewFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoFile;
- (id)thumbnailFilename;
- (id)pathForMetadata;
- (void)addExtensionsFromMetadataDirectory;
- (void)createMetadataDirectoryIfNecessary;
- (void)deleteFiles;
- (void)deleteObsoleteFiles;
- (void)forceAddExtensionsFromMetadataDirectory;
- (BOOL)hasObsoleteFiles;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (BOOL)hasPrebakedThumbnail;
- (BOOL)hasPrebakedWildcatThumbnails;
- (BOOL)hasVideoFile;
- (id)imageSourceTypeHint;
- (id)initWithName:(id)a0 number:(int)a1 directory:(id)a2;
- (BOOL)isWritePending;
- (id)lowResolutionFilename;
- (id)pathForContainingDirectory;
- (id)pathForFullSizeImage;
- (id)pathForGroupWithoutExtension;
- (id)pathForLowResolutionFile;
- (id)pathForMetadataWithGroupName;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForThumbnailFile;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedThumbnailFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (void)setWriteIsPending:(BOOL)a0;
- (id)videoPreviewFilename;

@end
