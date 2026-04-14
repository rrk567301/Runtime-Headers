@class NSMutableArray, NSData, NSMutableData, NSObject, NSURL;
@protocol OS_os_log;

@interface UARPRTKitFTAB : NSObject {
    NSObject<OS_os_log> *_log;
    unsigned long long _ftabLength;
    NSData *_data;
    NSMutableData *_personalizedData;
    NSURL *_url;
    NSURL *_personalizedUrl;
    struct UARPFTABHeader { unsigned int generation; unsigned int valid; unsigned char bootNonce[8]; unsigned int manifestOffset; unsigned int manifestSize; unsigned long long reserved1; unsigned char magic[8]; unsigned int fileCount; unsigned int reserved2; } _ftabHeader;
    NSMutableArray *_subfiles;
}

@property (readonly) NSData *manifestData;

- (void)setGeneration:(id)a0;
- (BOOL)writeToURL:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFilePath:(id)a0;
- (id)description;
- (void)setManifest:(id)a0;
- (id)subfileWithTag:(id)a0;
- (id)getDataBlock:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)getManifest;
- (void)setBootNonce:(id)a0;
- (id)cleanFileHandleForWriting:(id)a0 error:(out id *)a1;
- (BOOL)expandFileTable:(out id *)a0;
- (id)getDataRangeFromData:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)getDataRangeFromURL:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)processSubfileInfo:(struct UARPFTABFileInfo { unsigned char x0[4]; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;

@end
