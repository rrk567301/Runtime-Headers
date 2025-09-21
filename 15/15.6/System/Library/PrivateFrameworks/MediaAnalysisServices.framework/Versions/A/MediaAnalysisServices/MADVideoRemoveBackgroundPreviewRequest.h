@class MADVideoRemoveBackgroundPreviewResult;

@interface MADVideoRemoveBackgroundPreviewRequest : MADVideoRequest

@property (readonly, nonatomic) MADVideoRemoveBackgroundPreviewResult *result;

+ (char)supportsSecureCoding;

- (id)description;

@end
