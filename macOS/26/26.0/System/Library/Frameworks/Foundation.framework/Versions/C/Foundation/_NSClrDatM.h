@interface _NSClrDatM : NSConcreteMutableData

- (BOOL)_allowsDirectEncoding;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (void)encodeWithCoder:(id)a0;
- (void)_freeBytes;
- (id)description;
- (BOOL)_canUseRealloc;

@end
