@class NSURL;

@interface ICShareNoteExporter : NSObject

@property (retain, nonatomic) NSURL *exportDirectory;

- (void).cxx_destruct;
- (id)exportRTFDFileFromNote:(id)a0;
- (void)cleanUpExportedFiles;
- (id)fileWrapperForNote:(id)a0;
- (id)filenameFromTitle:(id)a0;

@end
