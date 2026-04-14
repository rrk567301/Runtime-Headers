@interface _NSClrDatM : NSConcreteMutableData

- (void)_freeBytes;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (id)description;
- (BOOL)_canUseRealloc;
- (BOOL)_allowsDirectEncoding;

@end
