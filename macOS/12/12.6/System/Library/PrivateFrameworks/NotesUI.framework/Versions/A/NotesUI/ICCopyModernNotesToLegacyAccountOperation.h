@class NSArray;
@protocol ICLegacyContext, ICLegacyFolder;

@interface ICCopyModernNotesToLegacyAccountOperation : NSOperation

@property (copy, nonatomic) NSArray *sourceNotes;
@property (retain, nonatomic) id<ICLegacyFolder> destinationFolder;
@property (retain, nonatomic) id<ICLegacyContext> legacyContext;
@property (copy, nonatomic) id /* block */ didCopyBlock;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithNotes:(id)a0 toFolder:(id)a1 legacyContext:(id)a2 didCopyBlock:(id /* block */)a3;
- (id)ensureLegacyFolderIsValid:(id)a0;
- (id)copyNote:(id)a0 toFolder:(id)a1;
- (id)dataForAttachment:(id)a0 didUseFallbackImage:(BOOL *)a1;
- (id)htmlAttributesForAttachment:(id)a0 legacyContentID:(id)a1 tagName:(id *)a2;

@end
