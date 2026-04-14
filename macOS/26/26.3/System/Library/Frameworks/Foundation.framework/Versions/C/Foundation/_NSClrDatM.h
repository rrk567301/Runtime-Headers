@interface _NSClrDatM : NSConcreteMutableData

- (void)_freeBytes;
- (BOOL)_canUseRealloc;
- (BOOL)_allowsDirectEncoding;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;

@end
