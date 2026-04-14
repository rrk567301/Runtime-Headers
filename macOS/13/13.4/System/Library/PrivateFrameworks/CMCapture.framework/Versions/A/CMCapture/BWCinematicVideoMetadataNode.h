@class BWNodeOutput;

@interface BWCinematicVideoMetadataNode : BWNode {
    struct opaqueCMFormatDescription { } *_metadataFormatDescription;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    unsigned int _localIDForAperture_BE;
    unsigned int _localIDForDisparity_BE;
    unsigned int _localIDForCinematographyMetadata_BE;
    unsigned int _localIDForRenderingMetadata_BE;
    unsigned int _localIDForStabilizationMetadata_BE;
}

@property (readonly, nonatomic) BWNodeOutput *passthruOutput;
@property (readonly, nonatomic) BWNodeOutput *metadataOutput;

@end
