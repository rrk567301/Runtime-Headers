@interface BRCShareAcceptationDirectoryFault : BRCDirectoryItem <BRCShareAcceptationFault>

- (id)initWithFilename:(id)a0 itemID:(id)a1 parentIDWhenSubitem:(id)a2 appLibrary:(id)a3 clientZone:(id)a4 sharingOptions:(unsigned long long)a5;
- (void)markNeedsTransformIntoNormalFault;
- (void)deleteShareAcceptationFault;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)isShareAcceptationFault;
- (id)asShareAcceptationFault;

@end
