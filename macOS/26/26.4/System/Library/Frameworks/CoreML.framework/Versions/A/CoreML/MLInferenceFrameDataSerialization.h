@class NSURL, NSString;

@interface MLInferenceFrameDataSerialization : NSObject

@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) BOOL shouldOverwrite;
@property (nonatomic) BOOL modelIOFrameData;
@property (nonatomic) BOOL segmentIOFrameData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOutputDirectory:(id)a0 prefix:(id)a1;
- (id)initWithOutputDirectory:(id)a0 prefix:(id)a1 shouldOverwrite:(BOOL)a2 modelIOFrameData:(BOOL)a3 segmentIOFrameData:(BOOL)a4;

@end
