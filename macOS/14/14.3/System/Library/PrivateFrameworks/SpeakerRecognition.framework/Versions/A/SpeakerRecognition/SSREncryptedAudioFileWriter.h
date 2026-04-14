@class NSURL, NSMutableData, NSString;

@interface SSREncryptedAudioFileWriter : NSObject <CSAudioFileWriter>

@property (retain, nonatomic) NSURL *fileUrl;
@property (retain, nonatomic) NSMutableData *writeBuffer;
@property (nonatomic) unsigned long long sampleByteDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
