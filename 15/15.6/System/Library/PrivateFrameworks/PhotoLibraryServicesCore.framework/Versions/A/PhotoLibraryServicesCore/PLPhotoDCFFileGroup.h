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

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)date;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (char)hasThumbnail;
- (void)setDate:(id)a0;
- (id)directory;
- (id)extensions;
- (void)addExtension:(id)a0;
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
- (char)hasObsoleteFiles;
- (char)hasPrebakedLandscapeScrubberThumbnails;
- (char)hasPrebakedPortraitScrubberThumbnails;
- (char)hasPrebakedThumbnail;
- (char)hasPrebakedWildcatThumbnails;
- (char)hasVideoFile;
- (id)imageSourceTypeHint;
- (id)initWithName:(id)a0 number:(int)a1 directory:(id)a2;
- (char)isWritePending;
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
- (void)setWriteIsPending:(char)a0;
- (id)videoPreviewFilename;

@end
