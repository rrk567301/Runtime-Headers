@class LPLinkMetadata, LPLinkSnapshotConfiguration, ICAttachment, LPLinkSnapshotGenerator;

@interface ICLinkSnapshotGenerator : NSObject

@property (readonly, nonatomic) LPLinkSnapshotGenerator *generator;
@property (readonly, nonatomic) LPLinkMetadata *metadata;
@property (readonly, nonatomic) LPLinkSnapshotConfiguration *configuration;
@property (readonly, nonatomic) ICAttachment *attachment;
@property (nonatomic) char forcesSmallSize;
@property (nonatomic) char forcesLightMode;
@property (nonatomic, getter=isInsideSystemPaper) char insideSystemPaper;

- (void).cxx_destruct;
- (void)invalidate;
- (id)snapshot;
- (id)initWithAttachment:(id)a0;

@end
