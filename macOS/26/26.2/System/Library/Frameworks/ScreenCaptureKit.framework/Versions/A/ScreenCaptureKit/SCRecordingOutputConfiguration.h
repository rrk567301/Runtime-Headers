@class NSURL, NSString, NSArray;

@interface SCRecordingOutputConfiguration : NSObject

@property (copy, nonatomic) NSURL *outputURL;
@property (copy, nonatomic) NSString *videoCodecType;
@property (copy, nonatomic) NSString *outputFileType;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (readonly, nonatomic) NSArray *availableOutputFileTypes;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
