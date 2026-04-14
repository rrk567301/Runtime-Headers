@interface _NSClrDat : NSConcreteData

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (BOOL)_allowsDirectEncoding;

@end
