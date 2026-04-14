@class SUProductStub;

@interface SUProductStubImpl : SUProduct

@property (retain) SUProductStub *stub;

- (id)displayName;
- (id)displayVersion;
- (id)initWithStub:(id)a0;
- (id)productKey;

@end
