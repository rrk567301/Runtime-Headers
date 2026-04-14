@interface BRCShareAcceptationDirectoryFault : BRCDirectoryItem <BRCShareAcceptationFault>

- (BOOL)isShareAcceptationFault;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (void)deleteShareAcceptationFault;
- (void)stageShareAcceptationFaultWithName:(id)a0;
- (void)markLiveFromStageAsShareAcceptationFault;
- (void)markNeedsTransformIntoNormalFault;
- (id)initWithFilename:(id)a0 itemID:(id)a1 parentID:(id)a2 appLibrary:(id)a3 clientZone:(id)a4 sharingOptions:(unsigned long long)a5;
- (id)asShareAcceptationFault;

@end
