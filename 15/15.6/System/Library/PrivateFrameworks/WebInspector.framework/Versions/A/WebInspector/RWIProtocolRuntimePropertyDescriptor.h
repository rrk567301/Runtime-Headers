@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;
@property (nonatomic) char writable;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *get;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *set;
@property (nonatomic) char wasThrown;
@property (nonatomic) char configurable;
@property (nonatomic) char enumerable;
@property (nonatomic) char isOwn;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *symbol;
@property (nonatomic) char isPrivate;
@property (nonatomic) char nativeGetter;

- (id)initWithName:(id)a0;

@end
