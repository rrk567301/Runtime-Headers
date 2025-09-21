@class NSURL, NSString;

@interface VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSURL *modelFileURL;
@property (readonly, nonatomic) NSURL *labelsFileURL;
@property (readonly, copy, nonatomic) NSString *inputBlobName;
@property (readonly, copy, nonatomic) NSString *outputBlobName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModelFileURL:(id)a0 labelsFileURL:(id)a1 inputBlobName:(id)a2 outputBlobName:(id)a3;

@end
