@interface _NSClrDatM : NSConcreteMutableData

- (void)_freeBytes;
- (BOOL)_canUseRealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_allowsDirectEncoding;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (id)description;

@end
