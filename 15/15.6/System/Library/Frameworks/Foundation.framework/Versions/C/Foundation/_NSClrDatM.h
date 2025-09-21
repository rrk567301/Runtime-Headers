@interface _NSClrDatM : NSConcreteMutableData

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (char)_allowsDirectEncoding;
- (char)_canReplaceWithDispatchDataForXPCCoder;
- (char)_canUseRealloc;
- (void)_freeBytes;

@end
