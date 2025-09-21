@interface _NSClrDat : NSConcreteData

- (BOOL)_allowsDirectEncoding;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
