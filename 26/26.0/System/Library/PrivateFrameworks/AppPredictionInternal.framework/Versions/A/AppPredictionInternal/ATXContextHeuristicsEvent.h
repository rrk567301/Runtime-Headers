@class NSString;

@interface ATXContextHeuristicsEvent : NSObject <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, copy, nonatomic) NSString *contextName;
@property (readonly, copy, nonatomic) NSString *contextType;
@property (nonatomic) BOOL isStart;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)jsonDictionary;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (id)serialize;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithContextName:(id)a0 contextType:(id)a1 isStart:(BOOL)a2;

@end
