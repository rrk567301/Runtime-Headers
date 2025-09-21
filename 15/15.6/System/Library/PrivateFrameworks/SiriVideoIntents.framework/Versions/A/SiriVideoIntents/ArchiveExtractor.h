@interface ArchiveExtractor : NSObject

- (char)copyDataFromReadArchive:(struct archive { } *)a0 toWriteDiskArchive:(struct archive { } *)a1;
- (struct archive { } *)createReadArchive;
- (struct archive { } *)createWriteDiskArchive;
- (char)extractArchiveAtURL:(id)a0 toDestinationDirectoryURL:(id)a1;
- (char)performExtractionForArchive:(struct archive { } *)a0 toDestinationDirectory:(id)a1;
- (char)unarchiveData:(id)a0 toDestinationDirectory:(id)a1;

@end
