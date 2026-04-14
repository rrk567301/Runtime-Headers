@interface _NSClrDatM : NSConcreteMutableData

- (BOOL)_canUseRealloc;
- (BOOL)_allowsDirectEncoding;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (void)_freeBytes;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
