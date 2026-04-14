@interface _NSClrDatM : NSConcreteMutableData

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (BOOL)_allowsDirectEncoding;
- (void)_freeBytes;
- (BOOL)_canUseRealloc;

@end
