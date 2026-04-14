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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isValid;
- (long long)compare:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)date;
- (id)directory;
- (BOOL)hasThumbnail;
- (void)setDate:(id)a0;
- (id)extensions;
- (void)addExtension:(id)a0;
- (id)pathForVideoPreviewFile;
- (id)pathForVideoFile;
- (id)pathForTrimmedVideoFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)thumbnailFilename;
- (id)initWithName:(id)a0 number:(int)a1 directory:(id)a2;
- (void)deleteFiles;
- (void)setWriteIsPending:(BOOL)a0;
- (id)pathForMetadata;
- (id)prebakedThumbnailFilename;
- (id)pathForGroupWithoutExtension;
- (BOOL)hasVideoFile;
- (void)addExtensionsFromMetadataDirectory;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (id)lowResolutionFilename;
- (id)videoPreviewFilename;
- (id)pathForFullSizeImage;
- (id)imageSourceTypeHint;
- (void)deleteObsoleteFiles;
- (BOOL)hasObsoleteFiles;
- (void)forceAddExtensionsFromMetadataDirectory;
- (id)pathForContainingDirectory;
- (id)pathForMetadataWithGroupName;
- (void)createMetadataDirectoryIfNecessary;
- (id)pathForThumbnailFile;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForLowResolutionFile;
- (BOOL)hasPrebakedThumbnail;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (BOOL)hasPrebakedWildcatThumbnails;
- (BOOL)isWritePending;

@end
