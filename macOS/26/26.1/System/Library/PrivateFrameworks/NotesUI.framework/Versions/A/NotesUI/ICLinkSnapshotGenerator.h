@class LPLinkMetadata, LPLinkSnapshotConfiguration, ICAttachment, LPLinkSnapshotGenerator;

@interface ICLinkSnapshotGenerator : NSObject

@property (readonly, nonatomic) LPLinkSnapshotGenerator *generator;
@property (readonly, nonatomic) LPLinkMetadata *metadata;
@property (readonly, nonatomic) LPLinkSnapshotConfiguration *configuration;
@property (readonly, nonatomic) ICAttachment *attachment;
@property (nonatomic) BOOL forcesSmallSize;
@property (nonatomic) BOOL forcesLightMode;
@property (nonatomic, getter=isInsideSystemPaper) BOOL insideSystemPaper;

- (id)snapshot;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;

@end
