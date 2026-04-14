@interface _NSClrDat : NSConcreteData

- (BOOL)_allowsDirectEncoding;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;

@end
