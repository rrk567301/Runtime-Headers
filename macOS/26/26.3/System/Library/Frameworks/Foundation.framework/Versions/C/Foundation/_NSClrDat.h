@interface _NSClrDat : NSConcreteData

- (BOOL)_allowsDirectEncoding;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;

@end
